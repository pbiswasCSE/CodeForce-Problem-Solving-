#include<stdio.h>
int main(){
   //printf("Enter the Weight must be (1<=w<=100) :");
    int w;
   scanf("%d",&w);

    int a=w-2;
   if (a%2==0 && w>2)
   {
    printf("yes");
   }else
   {
    printf("no");
   }
   
   
    return 0;
}

  