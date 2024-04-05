#include <stdio.h>
int flip(int n, char arr[]){
  int count=n-1;
 
  for(int i=0;i<n;i++){
    if(arr[i]=='B')count--;
    else break;
  }
  for(int j=n-1;j>=0;j--){
    if(arr[j]=='A')count--;
    else break;
  }
  if(count>=0)return count;
   else return 0;
}
int main(void) {
 int n;
  scanf("%d",&n);
  int res[n];
for(int k=0;k<n;k++){
    int x;scanf("%d",&x);
    char arra[x];
    scanf("%s",arra);	
    res[k]=flip(x,arra);
   }
 for(int i=0;i<n;i++){
   printf("%d\n",res[i]);
 }
  return 0;
}