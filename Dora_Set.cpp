#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int x,y,z=0,count=0;cin>>x>>y;
        if(x%2==0&&y%2==0){
            z=(y-x)-1;
            count=z/4;
            if(z%4==3)count++;
        }else{
            if(x%2==0||y%2==0){
                z=y-x;
                count=z/4;
                if(z%4==3)count++;
            }else{
                z=(y-x)+1;
                count=z/4;
                if(z%4==3)count=count+1;
            }
        }
        cout<<count<<endl;
    }
    
return 0;
}