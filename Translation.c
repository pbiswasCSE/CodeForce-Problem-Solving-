#include<stdio.h>
#include<string.h>
int main (){
    char s[1000],g[1000];
    scanf("%s%s",s,g);
    int x=strlen(s),temp=0;
    for (int i = 0; i < x; i++)
    {
        if (s[i]==g[x-i-1])temp++;
        else{
            temp=0;
        }
       
        
    }if (temp==x)printf("YES");
    else{printf("NO");}
    return 0;
    
    

}