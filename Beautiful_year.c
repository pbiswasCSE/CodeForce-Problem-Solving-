#include<stdio.h>
int main(){
    int x,a,e,b,c,d,f,g,i=1;
    scanf("%d",&x);
    while(i>0){
        x++;
        a=x%10;e=x/10;
        b=e%10;f=x/100;
        c=f%10;g=x/1000;
        d=g%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
        
       i++; 
    }
    
  printf("%d",x);
  return 0;
    
    
}