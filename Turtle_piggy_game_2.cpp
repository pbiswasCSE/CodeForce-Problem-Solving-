#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    sort(arr, arr + n);
    int z=(n/2)+1;
    if(n==2)cout<<arr[1]<<endl;
    else cout<<arr[z-1]<<endl;
    }

    return 0;
}
