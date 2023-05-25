/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React, {useEffect, useMemo} from 'react';
import type {PropsWithChildren} from 'react';
import {
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
} from 'react-native';

import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';
import {AuthorizedApolloProvider} from './AuthorizedApolloProvider';
import {
  gql,
  useQuery,
  useReactiveVar,
  useSubscription as useApolloSubscription,
} from '@apollo/client';
import {client} from './app/graphql/client';
import {createClient} from 'graphql-ws';
import {Nclient} from './SubscriptionExample';

type SectionProps = PropsWithChildren<{
  title: string;
}>;

const TransactionUpdate = gql`
  subscription TransactionUpdate($entityUuid: ID!) {
    onDebitCardAccountUpdate(entityUuid: $entityUuid) {
      id
    }
  }
`;

const GetDebitCardAccounts = gql`
  query GetDebitCardAccounts(
    $limit: Int!
    $nextToken: DebitCardAccountV2NextTokenInput
  ) {
    getDebitCardAccountsV2(limit: $limit, nextToken: $nextToken) {
      accounts {
        id
        name
        status
        balance {
          value
          currency
        }
        icon {
          colour
          letter
        }
        accountDetails {
          account
          bsb
          name
        }
        cards {
          colour
          id
          name
          maskedPan
          status
          owner
          customerUuid
          format
          type
          cardSequenceNumber
        }
      }
      nextToken {
        entityUuid
        id
        type
      }
    }
  }
`;

const useSubscription: typeof useApolloSubscription = (...args) => {
  const [subscription, options] = args;

  const mergedOptions = useMemo(
    () => ({
      ...options,
      skip: false,
    }),
    [options],
  );

  return useApolloSubscription(subscription, mergedOptions);
};

const id = 'd22e9da9-d629-403c-8181-5c1b7552f995';

function Section({children, title}: SectionProps): JSX.Element {
  const isDarkMode = useColorScheme() === 'dark';

  const client1 = createClient({
    url: 'wss://62yuh3nhmzg6jg4lhkd6t3dx6y.appsync-realtime-api.ap-southeast-2.amazonaws.com/?header=eyJob3N0IjoiNjJ5dWgzbmhtemc2amc0bGhrZDZ0M2R4NnkuYXBwc3luYy1hcGkuYXAtc291dGhlYXN0LTIuYW1hem9uYXdzLmNvbSIsIngtYXBpLWtleSI6ImRhMi15dXQycWx1eWF6aG41bmdnZ2NxNno2ZXNqYSJ9&payload=e30%3D',
    connectionParams: {
      Authorization:
        'eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImtpZCI6InJfbGV2LWd6ME9wY3VoVDFlSV9ERiJ9.eyJpc3MiOiJodHRwczovL2F1dGgubXl6ZWxsZXIuZGV2LyIsInN1YiI6ImF1dGgwfDYzNTY0NzBhYjBhOTcxODk0YmFmYzkwYyIsImF1ZCI6WyJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL2FwaS92Mi8iLCJodHRwczovL3plbGxlci1kZXYuYXUuYXV0aDAuY29tL3VzZXJpbmZvIl0sImlhdCI6MTY4NTAwODk2MiwiZXhwIjoxNjg1MTgxNzYyLCJhenAiOiJZM05ka0NOSVdoTjZXWXNQOHhTaTB4dnc2QmFpdEU0RiIsInNjb3BlIjoib3BlbmlkIHByb2ZpbGUgZW1haWwgcmVhZDpjdXJyZW50X3VzZXIgdXBkYXRlOmN1cnJlbnRfdXNlcl9tZXRhZGF0YSBkZWxldGU6Y3VycmVudF91c2VyX21ldGFkYXRhIGNyZWF0ZTpjdXJyZW50X3VzZXJfbWV0YWRhdGEgY3JlYXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgZGVsZXRlOmN1cnJlbnRfdXNlcl9kZXZpY2VfY3JlZGVudGlhbHMgdXBkYXRlOmN1cnJlbnRfdXNlcl9pZGVudGl0aWVzIG9mZmxpbmVfYWNjZXNzIiwiZ3R5IjoicGFzc3dvcmQifQ.mP5Uv9BFxnebzMzpk_Wq0Zsv6bCyF9Y5303LeGiW40RLhdaX8798jEjv7I0qXk6g3WoYq-CVhF3w9r8iHOQhL6WjudvMxgiVA5ZSdCek21a3x4QT52JQFRyvN36P6hKEEXJa36uUOxaLuGyjJGBLp06RT93iFIwn3yXYf3EKmxoPoWFZHs_NssKR_PCHx5VeVumR17qYzZLkP9MabHxjro--ZthwS3Zc8Qx47UN-GCMOvKFgqeZ0XOwvKZPvTVfO5N628XTu1tR4wdO1oUz2cHi0kPYtX3YiZKsVzW5o6CSFB2kmW8-cWUKHV3jJ7Q6rYEBqofMkN6veWQGVKLuoYA',
      'zeller-session-id': '6b540c5e-b65f-4b9d-8291-48f54251eb58',
    },
  });

//   // subscription
//   (async () => {
//     const onNext = () => {
//       console.log('onNext');
//       /* handle incoming values */
//     };
//
//     let unsubscribe = () => {
//       /* complete the subscription */
//     };
//
//     await new Promise((resolve, reject) => {
//       unsubscribe = client1.subscribe(
//         {
//           query: `
//   subscription TransactionUpdate($entityUuid: ID!) {
//     onDebitCardAccountUpdate(entityUuid: $entityUuid) {
//       id
//     }
//   }
// `,
//         },
//         {
//           next: onNext,
//           error: error => console.log({error}),
//           complete: resolve,
//         },
//       );
//     });
//
//     expect(onNext).toBeCalledTimes(5); // we say "Hi" in 5 languages
//   })();

  const {data, error, refetch, networkStatus, fetchMore} = useQuery(
    GetDebitCardAccounts,
    {
      variables: {
        limit: 20,
      },
      pollInterval: 0,
      errorPolicy: 'all',
      fetchPolicy: 'cache-first',
      refetchWritePolicy: 'overwrite',
      notifyOnNetworkStatusChange: true,
      client: Nclient,
    },
  );

  console.log(data);
  console.log(error);

  // const {data: data1, error: error1} = useSubscription(TransactionUpdate, {
  //   variables: {
  //     entityUuid: id,
  //   },
  //   skip: true,
  // });

  return (
    <View style={styles.sectionContainer}>
      <Text
        style={[
          styles.sectionTitle,
          {
            color: isDarkMode ? Colors.white : Colors.black,
          },
        ]}>
        {title}
      </Text>
      <Text
        style={[
          styles.sectionDescription,
          {
            color: isDarkMode ? Colors.light : Colors.dark,
          },
        ]}>
        {children}
      </Text>
    </View>
  );
}

function App(): JSX.Element {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar
        barStyle={isDarkMode ? 'light-content' : 'dark-content'}
        backgroundColor={backgroundStyle.backgroundColor}
      />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}>
        <Header />
        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}>
          <Section title="Step One">
            Edit <Text style={styles.highlight}>App.tsx</Text> to change this
            screen and then come back to see your edits.
          </Section>
          <Section title="See Your Changes">
            <ReloadInstructions />
          </Section>
          <Section title="Debug">
            <DebugInstructions />
          </Section>
          <Section title="Learn More">
            Read the docs to discover what to do next:
          </Section>
          <LearnMoreLinks />
        </View>
      </ScrollView>
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
});

const ar = () => {
  return (
    <AuthorizedApolloProvider>
      <App />
    </AuthorizedApolloProvider>
  );
};

export default ar;
