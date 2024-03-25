#include <stdio.h>

void pro(int a)
{ int x=a/2;
  if(a%2==0){
    printf("YES\n");
    for(int i=0;i<x;i++)
      {
        if(i%2!=0)printf("BB");
        else printf("AA");
      }
    printf("\n");
  }
 else printf("NO\n");
}

int main(void) {
  int n;scanf("%d",&n);
  int str[n];
  for(int j=0;j<n;j++){
    scanf("%d",&str[j]);
  }
  for(int k=0;k<n;k++){
    pro(str[k]);
  }
  return 0;
}