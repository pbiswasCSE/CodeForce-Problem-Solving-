#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long ll;

vector<ll> getPrimes(int N) {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<ll> primes;
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    fast;

    vector<ll> primes = getPrimes(1000000); // one time

    ll tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;

        for (ll i = 0; i < n; i++) {
            cout << primes[i] * primes[i+1] << " ";
        }
        cout << endl;
    }

    return 0;
}