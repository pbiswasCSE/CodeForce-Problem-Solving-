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
    vector<ll>s(n),a(n);
    for (int i = 0; i < n; i++)cin>>s[i];

    ll a_first = s[n-1];

    ll a_last = s[0];

    for (int i = 1; i < n-1; i++)
    {
        a[i]=((s[i+1]+s[i-1])/2)-s[i];

        a_first -= a[i]*ll(n-i-1);
        a_last -= a[i]*ll(i);
    }
    
    a[0]=a_first/(n-1);
    a[n-1]=a_last/(n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
   cout<<"\n";

  }
return 0;
}