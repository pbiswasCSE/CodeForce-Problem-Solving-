#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    char g[x],p;
    int t[x];
    scanf("%s",g);
     for (int k = 0; k < y; k++)
       {
         for (int j = 0; j < x; j++)
        {
           if (g[j]=='B')
           {
            t[j]=1;
           }
           else{
            t[j]=0;
           } 
        }
        for (int i = 0; i < x; i++)
        {
            if (t[i]==1 && i<x-1)
            {
            p=g[i+1];
            g[i+1]=g[i];
            g[i]=p;
            
            }
         }
        }
     printf("%s",g);
     return 0;

}