#include<stdio.h>


int main()
{
    int n,x;
    scanf("%d", &n);
    int count = 0;
    int temp=0;
    
    while(n>0 && count>=0){
        x=n%10;
        n = n/10;
        if (x==4||x==7)temp=0;
        else{ temp=1;
              break;}
              count++;

        
        
    }if(temp==0)printf("YES");
    else printf("NO");

  return 0;
}
 