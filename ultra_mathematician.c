#include<stdio.h>
#include<string.h>

int main(){
    char x[1000],y[1000],z;
    scanf("%s%s",x,y);
    z=strlen(x);
    for (int i = 0; i < z; i++)
    {
        if (x[i]==y[i])printf("0");
        else printf("1");
        
    }
 return 0;

}