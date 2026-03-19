#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,sum=0,x=1,y=0,count=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            y=pow(((2*x)-1),2);
            if(y==sum){count++;x++;}

        }
        cout<<count<<endl;
        

    }
    return 0;
}