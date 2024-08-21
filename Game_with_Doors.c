#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int arr1[2],arr2[2];
        for(int i=0;i<2;i++){
            scanf("%d",&arr1[i]);
        }
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[j]);
        }
        if(arr1[0]==arr2[0]&&arr1[1]==arr2[1]){
            printf("%d",arr1[1]-arr1[0]);
        }else if(arr1[0]==arr2[0]||arr1[0]==arr2[1]||arr1[1]==arr2[0]||arr1[1]==arr2[1]){
            if(arr1[1]-arr1[0]>arr2[1]-arr2[0]){
                printf("%d",arr2[1]-arr2[0]);
            }else{
                printf("%d",arr1[1]-arr1[0]);
            }
        }else if((arr2[0]>arr1[0]&&arr2[1]>arr1[1])||(arr1[0]>arr2[0]&&arr1[1]>arr2[1])){
            if(arr1[1]-arr1[0]>arr2[1]-arr2[0]){
                printf("%d",(arr2[1]-arr2[0])+1);
            }else{
                printf("%d",(arr1[1]-arr1[0]+1));
            }
        }else{
            printf("%d",1);
        }
    }
    return 0;

}
