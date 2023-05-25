import {
  ApolloClient,
  createHttpLink,
  FetchResult,
  from,
  InMemoryCache,
  Observable,
} from '@apollo/client';
import {setContext} from '@apollo/client/link/context';
import {onError} from '@apollo/client/link/error';

import {NetworkError} from '@apollo/client/errors';

export const processOnlyOnUnuathorized = (
  networkError: NetworkError | undefined,
  processOperation: () => Observable<
    FetchResult<Record<string, any>, Record<string, any>, Record<string, any>>
  >,
  // Callback of apollo onError allows returning void or fetch results, we don't want to return anything if there is an error different than unauthorized
) => {
  if (
    networkError?.message ===
    'Response not successful: Received status code 401'
  ) {
    return processOperation();
  }
};

const REACT_APP_API_URI = 'https://mp.myzeller.dev/graphql';

export const httpLink = createHttpLink({
  uri: REACT_APP_API_URI,
});

export const authLink = setContext(async (_, {headers}) => ({
  headers: {
    ...headers,
    // token to be used here
    Authorization:
      'eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImtpZCI6InJfbGV2LWd6ME9wY3VoVDFlSV9ERiJ9.eyJpc3MiOiJodHRwczovL2F1dGgubXl6ZWxsZXIuZGV2LyIsInN1YiI6ImF1dGgwfDYzNTY0NzBhYjBhOTcxODk0YmFmYzkwYyIsImF1ZCI6WyJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL2FwaS92Mi8iLCJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL3VzZXJpbmZvIl0sImlhdCI6MTY4NTAwODk2MiwiZXhwIjoxNjg1MTgxNzYyLCJhenAiOiJZM05ka0NOSVdoTjZXWXNQOHhTaTB4dnc2QmFpdEU0RiIsInNjb3BlIjoib3BlbmlkIHByb2ZpbGUgZW1haWwgcmVhZDpjdXJyZW50X3VzZXIgdXBkYXRlOmN1cnJlbnRfdXNlcl9tZXRhZGF0YSBkZWxldGU6Y3VycmVudF91c2VyX21ldGFkYXRhIGNyZWF0ZTpjdXJyZW50X3VzZXJfbWV0YWRhdGEgY3JlYXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgZGVsZXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgdXBkYXRlOmN1cnJlbnRfdXNlcl9pZGVudGl0aWVzIG9mZmxpbmVfYWNjZXNzIiwiZ3R5IjoicGFzc3dvcmQifQ.mP5Uv9BFxnebzMzpk_Wq0Zsv6bCyF9Y5303LeGiW40RLhdaX8798jEjv7I0qXk6g3WoYq-CVhF3w9r8iHOQhL6WjudvMxgiVA5ZSdCek21a3x4QT52JQFRyvN36P6hKEEXJa36uUOxaLuGyjJGBLp06RT93iFIwn3yXYf3EKmxoPoWFZHs_NssKR_PCHx5VeVumR17qYzZLkP9MabHxjro--ZthwS3Zc8Qx47UN-GCMOvKFgqeZ0XOwvKZPvTVfO5N628XTu1tR4wdO1oUz2cHi0kPYtX3YiZKsVzW5o6CSFB2kmW8-cWUKHV3jJ7Q6rYEBqofMkN6veWQGVKLuoYA',
    'zeller-session-id': '6b540c5e-b65f-4b9d-8291-48f54251eb58',
  },
}));

export const errorLink = onError(
  ({networkError, graphQLErrors, operation, forward}) => {
    // Only log a network error via sentry if there is something to report
    return processOnlyOnUnuathorized(networkError, () => forward(operation));
  },
);

// Initialize Apollo Client
export const client = new ApolloClient({
  link: from([errorLink, authLink, httpLink]),
  cache: new InMemoryCache(),
});
