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
  ll tc; cin>>tc;
  while(tc--){
    ll x,y; cin>>x>>y;
    ll n=(x+1-y);
    if((n/9>=0&&n%9==0))cout<<"YES"<<endl;
    
    else cout<<"NO"<<endl;

  }
return 0;
}