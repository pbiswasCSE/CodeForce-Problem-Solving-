 // S.I.N.I.S.T.E.R //

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(),s.end()
typedef long long ll;
const double pi = acos(-1),ef=1e-9;
const ll N=5e5+5,M=1e9+7,H=131;


int main(){
  fast;
  ll tc; cin>>tc;
  while(tc--){

    ll n;
    cin>>n;

    vector<ll>s(n);
    for (ll i = 0; i < n; i++) cin>>s[i];

    bool res = true;

    ll cur = 1;

    ll l = 0 , r = n-1; 

    while(cur<=n){

        if(s[l]==cur){
            cur++;
            l++;
            continue;
        }
        if(s[r]==cur){
            cur++;
            r--;
            continue;
        }
        res =false;
        break;
    }
    if(res)cout<<"YES\n";
    else cout<<"NO\n";


  }
return 0;
}