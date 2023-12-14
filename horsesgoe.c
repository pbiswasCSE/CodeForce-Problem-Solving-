#include<stdio.h>

int main(){
    int x[4],temp=0,y=0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&x[i]);
    }
 for (int i = 0; i < 3; i++)
 {
    for (int j = i+1; j < 4; j++)
    {
        if (x[i]!=x[j])temp=1;
       else {temp=0;break;}
    }
    if(temp==1)y++;
 }
 
     if(y==4)printf("%d",4-y); 
     else printf("%d",4-y-1); 
 
    return 0;
    
    
}