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
    ll n,sum=0,count=0;
    cin>>n;
     
     if(n==1)cout<<1<<endl;
     else if(n==2)cout<<2<<endl;
     else if(n==3)cout<<2<<endl;
     else if(n==4)cout<<2<<endl;
     else{
        sum=4;count=2;
          while (sum<n)
           {
            count++;
            sum=(sum+1)*2;
        }   
        cout<<count<<endl;
     }
    

  }
return 0;
}