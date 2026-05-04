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


    
    vector<ll> s(7);
    for(ll i=0;i<7;i++) cin>>s[i];
    sort(all(s));

    ll ans=0;
    for (ll i = 0; i < 6; i++)
    {
        ans+=s[i];
    }
    
    cout<<-ans+s[6]<<"\n";

  }
return 0;
}