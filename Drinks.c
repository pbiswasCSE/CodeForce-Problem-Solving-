#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int gg[x];
     float temp=0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&gg[i]);
        temp=temp+gg[i];
    }
    
printf("%.12f",temp/x);
return 0;

}