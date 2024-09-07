#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;cin>>tt;
    while(tt--){
        int x,y,k,z=0;cin>>x>>y>>k;
        x=(x+k-1)/k;
        y=(y+k-1)/k;
      if(x>y){
            z=((2*x)-1);
            cout<<z<<endl;
        }
        else {
            z=2*y;
        cout<<z<<endl;
        }
    }
    return 0;
}