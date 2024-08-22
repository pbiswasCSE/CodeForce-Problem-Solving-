#include<stdio.h>
int main(){
    int n,a=0,b=0;
    scanf("%d",&n);
    char gg[n];
    scanf("%s",gg);
    char x[26]="abcdefghijklmnopqrstuvwxyz";
    char y[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    {
        for (int i = 0; i < 26; i++)
        {
           for (int j = 0; j < n; j++)
           {
             if (x[i]==gg[j]||y[i]==gg[j]){
                a=1;
                break;
             }
             else { a=0;}
                 
           }
           if(a==1)b++;

        }    
    }
    
    if (b>=26)printf("YES");
    else  printf("NO");
   
    return 0;
}