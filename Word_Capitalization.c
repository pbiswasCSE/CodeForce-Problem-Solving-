#include<stdio.h>

int main(){
    char X[100000];
    scanf("%s",X);
   
      if (X[0]>96 && X[0]<123)
   {
         X[0]=X[0]-32;
         printf("%s",X);  
   }     
    else
   {
         printf ("%s",X);
   }

    return 0;

   

   return 0;

}