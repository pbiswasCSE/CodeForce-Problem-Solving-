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

    ll n,x=0;
    cin>>n;

    vector<ll>s(n),v;
    for(ll i=0;i<n;i++)cin>>s[i];

    
    for(ll i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
             x=s[i]-s[i+1];
            
            v.pb(x);
            s[i+1]=s[i];
        }
    }
    sort(v.begin(),v.end());
    ll sum=0,cur=0,k=v.size();
    for(ll i=0;i<v.size();i++){
        
            sum+=(k+1)*(v[i]-cur);
            cur=max(v[i],cur);
            k--;
        
    }
    cout<<sum<<endl;

  }
return 0;
}