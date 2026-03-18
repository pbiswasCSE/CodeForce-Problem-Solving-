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
  ll n,cnt=0;
  cin>>n;

  vector<int>s(n+1,0);

  for (int i = 2; i <= n; i++)
  {
    if(s[i]==0){
      for (int j = i; j <=n; j+=i)s[j]++;
    }
  }
  
  for (int i = 2; i <=n; i++)
  {
    if(s[i]==2)cnt++;
  }
  


  

  
cout<<cnt<<"\n";
return 0;
}