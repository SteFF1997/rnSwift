import React, {ReactNode, useEffect, useRef, useState} from 'react';
import {AuthOptions, createAuthLink} from 'aws-appsync-auth-link';
import {createSubscriptionHandshakeLink} from 'aws-appsync-subscription-link';
import {
  ApolloClient,
  ApolloLink,
  ApolloProvider,
  from,
  split,
  DocumentNode,
  HttpLink,
} from '@apollo/client';
import DebounceLink from 'apollo-link-debounce';

import {authLink, client, errorLink, httpLink} from './app/graphql/client';

import {RefObject} from 'react';
import {getMainDefinition} from '@apollo/client/utilities';
import {createClient} from 'graphql-ws';
import { API, graphqlOperation, Amplify } from "aws-amplify";

interface GraphQLLinkConfig {
  url: string;
  region: string;
  auth: AuthOptions;
}

export const useSetupClientWithSubscription = () => {
  const setupSubscriptionLink = (
    token: string,
    subscriptionUrl: any | null,
  ): ApolloLink => {
    const API_URL =
      'https://u5x36aqt45byrkairlhqiiwh3u.appsync-api.ap-southeast-2.amazonaws.com/graphql';
    const subscriptionLinkConfig: GraphQLLinkConfig = {
      url: API_URL,
      region: subscriptionUrl?.region ?? 'ap-southeast-2',
      auth: {
        type: 'OPENID_CONNECT',
        jwtToken: async () => token,
      },
    };

    return ApolloLink.from([
      createAuthLink(subscriptionLinkConfig),
      createSubscriptionHandshakeLink(
        subscriptionLinkConfig,
        new HttpLink({uri: API_URL}),
      ),
    ]);
  };

  return {
    setupSubscriptionLink,
  };
};

export const shouldSetupClientWithSubscription = (
  subscriptionUrl: any | null,
  isInitialClientSetup: boolean,

  clientRef: RefObject<ApolloClient<any> | null>,
) => Boolean(subscriptionUrl && isInitialClientSetup && clientRef.current);

export const splitOnType = ({query}: {query: DocumentNode}) => {
  const mainDefinition = getMainDefinition(query);
  return (
    mainDefinition?.kind === 'OperationDefinition' &&
    mainDefinition?.operation === 'subscription'
  );
};

interface Props {
  children: ReactNode | ReactNode[] | null;
}

export const AuthorizedApolloProvider = ({children}: Props) => {
  // useRef instead of useMemo to make sure client is not re-created randomly

  const clientRef = useRef<ApolloClient<any>>(client);
  const tokenRef = useRef<string>('');
  const [isClientSetup, setIsClientSetup] = useState(false);
  const [isInitialClientSetup, setIsInitialClientSetup] = useState(false);

  const accessToken =
    'eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImtpZCI6InJfbGV2LWd6ME9wY3VoVDFlSV9ERiJ9.eyJpc3MiOiJodHRwczovL2F1dGgubXl6ZWxsZXIuZGV2LyIsInN1YiI6ImF1dGgwfDYzNTY0NzBhYjBhOTcxODk0YmFmYzkwYyIsImF1ZCI6WyJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL2FwaS92Mi8iLCJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL3VzZXJpbmZvIl0sImlhdCI6MTY4NTAwODk2MiwiZXhwIjoxNjg1MTgxNzYyLCJhenAiOiJZM05ka0NOSVdoTjZXWXNQOHhTaTB4dnc2QmFpdEU0RiIsInNjb3BlIjoib3BlbmlkIHByb2ZpbGUgZW1haWwgcmVhZDpjdXJyZW50X3VzZXIgdXBkYXRlOmN1cnJlbnRfdXNlcl9tZXRhZGF0YSBkZWxldGU6Y3VycmVudF91c2VyX21ldGFkYXRhIGNyZWF0ZTpjdXJyZW50X3VzZXJfbWV0YWRhdGEgY3JlYXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgZGVsZXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgdXBkYXRlOmN1cnJlbnRfdXNlcl9pZGVudGl0aWVzIG9mZmxpbmVfYWNjZXNzIiwiZ3R5IjoicGFzc3dvcmQifQ.mP5Uv9BFxnebzMzpk_Wq0Zsv6bCyF9Y5303LeGiW40RLhdaX8798jEjv7I0qXk6g3WoYq-CVhF3w9r8iHOQhL6WjudvMxgiVA5ZSdCek21a3x4QT52JQFRyvN36P6hKEEXJa36uUOxaLuGyjJGBLp06RT93iFIwn3yXYf3EKmxoPoWFZHs_NssKR_PCHx5VeVumR17qYzZLkP9MabHxjro--ZthwS3Zc8Qx47UN-GCMOvKFgqeZ0XOwvKZPvTVfO5N628XTu1tR4wdO1oUz2cHi0kPYtX3YiZKsVzW5o6CSFB2kmW8-cWUKHV3jJ7Q6rYEBqofMkN6veWQGVKLuoYA';

  const subscriptionUrl =
    'https://u5x36aqt45byrkairlhqiiwh3u.appsync-api.ap-southeast-2.amazonaws.com/graphql';

  const {setupSubscriptionLink} = useSetupClientWithSubscription();

  const subscriptionLink: ApolloLink = setupSubscriptionLink(
    accessToken,
    subscriptionUrl,
  );

  console.log(subscriptionLink.request);

  const link = split(splitOnType, subscriptionLink, httpLink);

  clientRef.current?.setLink(
    from([errorLink, authLink, new DebounceLink(200), link]),
  );

  return <ApolloProvider client={clientRef.current}>{children}</ApolloProvider>;
};
