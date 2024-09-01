#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int x,y;cin>>x>>y;
        if(x!=3&&y!=3)cout<<3;
        else if(x!=2&&y!=2)cout<<2;
        else cout<<1;
    return 0;
}