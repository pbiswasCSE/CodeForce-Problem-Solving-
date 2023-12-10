#include<stdio.h>
int main(){
    int n,a,b,temp=0;
    scanf("%d",&n);
    scanf("%d",&a);int x[a];
    for (int i = 0; i < a; i++){
         scanf("%d",&x[i]);
         if (x[i]==n)temp++;
         }
         

     scanf("%d",&b);int y[b];
    for (int i = 0; i < b; i++){
         scanf("%d",&y[i]);
         if(y[i]==4)temp++;
    }
    
 if (temp>0)printf("I become the guy.");
 else printf("Oh, my keyboard!");
 
 
    return 0;
}