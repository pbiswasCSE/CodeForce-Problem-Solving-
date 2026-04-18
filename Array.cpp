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


    ll n ;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<ll> b(n);

    ll mx = 0 , mn = 0;

    for(ll i=0;i<n-1;i++){
        for (ll  j = i+1; j < n; j++)
        {
           if(a[i] > a[j]) mx ++;
           if(a[i] < a[j]) mn ++;
        }

    
        b[i]=max(mx,mn);
            mx = 0 , mn = 0;
    }

    b[n-1] = 0;
    for(ll i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;
  }
return 0;
}