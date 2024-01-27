#include <stdio.h>
#include<string.h>

int main(void) {
  int count=0;
  char ara1[200],ara2[100],ara3[200];
  scanf("%s%s%s",ara1,ara2,ara3);
  strcat(ara1,ara2);
  int a=strlen(ara1);
  int b=strlen(ara3);
  
  if(a==b){
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
      if(ara1[i]==ara3[j]){
        ara3[j]='*';count++;break;
      }
    }
  }
    if(count==a)printf("YES");
    else printf("NO");
  }else printf("NO");
  
  
  
  return 0;
}