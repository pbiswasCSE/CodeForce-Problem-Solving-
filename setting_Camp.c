#include <stdio.h>
int res(int arra[]){
  int z=arra[1]/3+arra[0];
  int y=arra[1]%3;
  int x=arra[2]+y;
  if(x>=3)
  {
    if(x>=3){
    z=z+x/3;
    x=x%3;
  }
   if(x>=2){
    z=z+x/2;
    x=x%2;
  }
  else z=z+1;
  return z;
  }
  else return -1;
}

int main(void){
  int arr[3],n;
 scanf("%d",&n);
 int ras[n];
  for(int i=0;i<n;i++){
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    ras[i]=res(arr);
   }
  for(int j=0;j<n;j++){
    printf("%d\n",ras[j]);
  }
  return 0;
}