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

    ll n ,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    ll i=0,ok=0 , x=0,y=0;
    while(true && i < 10000){
       
      char j =s[i%n];

      if(j=='N')y++;
      else if(j=='E')x++;
      else if(j=='S')y--;
      else if(j=='W')x--;
      if(x==a&&y==b){
        ok=1;
        break;
      }
      i++;
    }
     if (ok)cout<<"YES\n";
     else cout<<"NO\n";
     

  }
return 0;
}