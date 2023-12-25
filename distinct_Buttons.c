#include<stdio.h>
#include<string.h>
struct Shapes
{
   char s[20];
};
int main(){
    int n,temp=0;
    scanf("%d",&n);
    struct Shapes shapes[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s",shapes[i].s);
        
        
    }
    for (int i = 1; i <= n; i++)
    {  
       if (shapes[i].s[0]=='T')temp=temp+4;
        else if (shapes[i].s[0]=='C')temp=temp+6;
        else if (shapes[i].s[0]=='O')temp=temp+8;
        else if (shapes[i].s[0]=='D')temp=temp+12;
        else if (shapes[i].s[0]=='I')temp=temp+20;
        
    }
    
    printf("%d",temp);
    return 0;
}