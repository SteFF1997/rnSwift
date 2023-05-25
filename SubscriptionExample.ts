import { ApolloLink } from "@apollo/client";

import {ApolloClient, InMemoryCache, gql} from '@apollo/client';
import {WebSocketLink} from '@apollo/client/link/ws';
import WebSocket from 'ws';
// import WebSocket from 'graphql-ws';
import {SubscriptionClient} from 'subscriptions-transport-ws';
import uuid4 from 'uuid';

const API_URL =
  'https://u5x36aqt45byrkairlhqiiwh3u.appsync-api.ap-southeast-2.amazonaws.com/graphql';
const WSS_URL = API_URL.replace('https', 'wss').replace(
  'appsync-api',
  'appsync-realtime-api',
);
const HOST = API_URL.replace('https://', '').replace('/graphql', '');
const api_header = {
  host: HOST,
  url: API_URL,
  region: 'ap-southeast-2',
  auth: {
    type: 'OPENID_CONNECT',
    jwtToken: async () =>
      'eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImtpZCI6InJfbGV2LWd6ME9wY3VoVDFlSV9ERiJ9.eyJpc3MiOiJodHRwczovL2F1dGgubXl6ZWxsZXIuZGV2LyIsInN1YiI6ImF1dGgwfDYzNTY0NzBhYjBhOTcxODk0YmFmYzkwYyIsImF1ZCI6WyJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL2FwaS92Mi8iLCJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL3VzZXJpbmZvIl0sImlhdCI6MTY4NTAwODk2MiwiZXhwIjoxNjg1MTgxNzYyLCJhenAiOiJZM05ka0NOSVdoTjZXWXNQOHhTaTB4dnc2QmFpdEU0RiIsInNjb3BlIjoib3BlbmlkIHByb2ZpbGUgZW1haWwgcmVhZDpjdXJyZW50X3VzZXIgdXBkYXRlOmN1cnJlbnRfdXNlcl9tZXRhZGF0YSBkZWxldGU6Y3VycmVudF91c2VyX21ldGFkYXRhIGNyZWF0ZTpjdXJyZW50X3VzZXJfbWV0YWRhdGEgY3JlYXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgZGVsZXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgdXBkYXRlOmN1cnJlbnRfdXNlcl9pZGVudGl0aWVzIG9mZmxpbmVfYWNjZXNzIiwiZ3R5IjoicGFzc3dvcmQifQ.mP5Uv9BFxnebzMzpk_Wq0Zsv6bCyF9Y5303LeGiW40RLhdaX8798jEjv7I0qXk6g3WoYq-CVhF3w9r8iHOQhL6WjudvMxgiVA5ZSdCek21a3x4QT52JQFRyvN36P6hKEEXJa36uUOxaLuGyjJGBLp06RT93iFIwn3yXYf3EKmxoPoWFZHs_NssKR_PCHx5VeVumR17qYzZLkP9MabHxjro--ZthwS3Zc8Qx47UN-GCMOvKFgqeZ0XOwvKZPvTVfO5N628XTu1tR4wdO1oUz2cHi0kPYtX3YiZKsVzW5o6CSFB2kmW8-cWUKHV3jJ7Q6rYEBqofMkN6veWQGVKLuoYA',
  },
};
// const header_encode = obj => global.btoa(JSON.stringify(obj));
const header_encode = obj => obj;
const connection_url =
  WSS_URL +
  '?header=' +
  header_encode(api_header) +
  '&payload=' +
  header_encode({});

//------------------------------------------------------------------------------------------------

class UUIDOperationIdSubscriptionClient extends SubscriptionClient {
  generateOperationId() {
    // AppSync recommends using UUIDs for Subscription IDs but SubscriptionClient uses an incrementing number
    return uuid4();
  }
  processReceivedData(receivedData) {
    try {
      const parsedMessage = JSON.parse(receivedData);
      if (parsedMessage?.type === 'start_ack') {
        return;
      } // sent by AppSync but meaningless to us
    } catch (e) {
      throw new Error('Message must be JSON-parsable. Got: ' + receivedData);
    }
    super.processReceivedData(receivedData);
  }
}

// appSyncGraphQLOperationAdapter.js
const graphqlPrinter = require('graphql/language/printer');
const createAppSyncGraphQLOperationAdapter = () => ({
  applyMiddleware: async (options, next) => {
    // AppSync expects GraphQL operation to be defined as a JSON-encoded object in a "data" property
    options.data = JSON.stringify({
      query:
        typeof options.query === 'string'
          ? options.query
          : graphqlPrinter.print(options.query),
      variables: options.variables,
    });

    // AppSync only permits authorized operations
    options.extensions = {authorization: api_header};

    // AppSync does not care about these properties
    delete options.operationName;
    delete options.variables;
    // Not deleting "query" property as SubscriptionClient validation requires it

    next();
  },
});

// WebSocketLink
const wsLink = new WebSocketLink(
  new UUIDOperationIdSubscriptionClient(
    connection_url,
    {
      timeout: 5 * 60 * 1000,
      reconnect: true,
      lazy: true,
      connectionCallback: err =>
        console.log('connectionCallback', err ? 'ERR' : 'OK', err || ''),
    },
    WebSocket,
  ).use([createAppSyncGraphQLOperationAdapter()]),
);

export const Nclient = new ApolloClient({
  cache: new InMemoryCache(),
  link: wsLink,
});
