 #include <stdio.h>
    int sum(int arr[],int n){
        int sum=arr[0];
        for(int i=1;i<n;i++){
            if(i%2!=0)sum=sum-arr[i];
            else sum=sum+arr[i];
        }
        return sum;
    }
     
    int main() {
     int t;scanf("%d",&t);
     while(t--){
        int n;scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n",sum(arr,n));
     }
     return 0;
    }