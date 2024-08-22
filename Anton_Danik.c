#include<stdio.h>
#include<string.h>

int main (){
    int n,A=0,D=0;
    scanf("%d",&n);
    char gg[n];
    scanf("%s",gg);
    for (int  i = 0; i < n; i++)
    {
        if (gg[i]=='A')
        {
            A++;
        }
        if (gg[i]=='D')
        {
           D++;
        }
        
        
    }
     if (A>D)
     {
        printf("Anton");
     }
     else if (D>A)
     {
        printf("Danik");
     }
     else{
        printf("Friendship");
     }
     
     
    
    return 0;
    
}