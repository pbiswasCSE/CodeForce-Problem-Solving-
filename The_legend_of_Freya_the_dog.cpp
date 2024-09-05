#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;cin>>tt;
    while(tt--){
        int x,y,k;cin>>x>>y>>k;
        if(x>y){
            if(x%k==0){
                int z=((x/k)*2)-1;
                cout<<z<<endl;
            }
            else{
                int z=((x/k)+1)*2;
                cout<<z<<endl;
            }
        }else if(x==y){
            cout<<(x/k)*2<<endl;
        }
        else {
        {
            if(y%k==0){
                int z=((y/k)*2)-1;
                cout<<z<<endl;
            }
            else{
                int z=((y/k)+1)*2;
                cout<<z<<endl;
            }
        }
        }
    }
    return 0;
}