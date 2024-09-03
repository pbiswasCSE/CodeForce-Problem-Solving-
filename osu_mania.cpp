#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int tt;cin>>tt;
    while (tt--)
    {
        int x;cin>>x;
        vector<int>res(x);
        for (int i = 0; i < x; i++)
        {
            string s;cin>>s;
            for (int j = 0; j < 4; j++)
            {
               if(s[j]=='#'){
                res[i]=j+1;
                break;
               }
            }
        }
        for (int i = x-1; i>=0; i--)
        {
           cout<<res[i]<<" ";
        }
        cout<<endl;
        
    }
}
