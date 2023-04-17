#include<stdio.h>
#include<string.h>
struct name
{
    char nam[100];
    
};

int main(){
    int n;
    scanf("%d",&n);
    struct name name[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        fflush(stdin);
     gets(name[i].nam);
    }
     
     for ( i = 0; i < n; i++)
     {
     int lengh = strlen(name[i].nam);
        if ((lengh-2) >= 8)
    {
        printf("%c%d%c\n",name[i].nam[0],(lengh-2),name[i].nam[lengh-1]);
    }
    else{
        printf("%s\n",name[i].nam);
   
     }
     
 
  }
    return 0; 
    

}