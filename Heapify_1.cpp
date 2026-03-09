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

    for (int i = 0; i < n; i++)
        cin>>s[i];

    

  for (int k = 0; k < 18; k++)
     for (int i = 0; i*2+1 < n; i++){
        if(s[i] > s[2*i+1] ){
            swap(s[i] , s[2*i+1]);
        }
    }

    if(is_sorted(all(s))) cout<<"YES\n";
    else cout<<"NO\n";

  }
return 0;
}