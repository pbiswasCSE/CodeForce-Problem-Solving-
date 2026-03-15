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


    int n;
    cin >> n;

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            freq[x]++;
        }
    }

    int mx = 0; 
    int total = n * n;

    for(auto &p : freq){
        mx = max(mx , p.second);
    }

    
    if (mx<=(n*n)-n) {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

  }
return 0;
}