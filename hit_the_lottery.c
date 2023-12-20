#include<stdio.h>
int main(){
    int n,temp=0;
    scanf("%d",&n);
     
     int a=n/100;int b=n%100;
     int c=b/20;int d=b%20;
     int e=d/10;int f=d%10;
     int g=f/5;int h=f%5;
     int i=h/1;

    printf("%d",a+c+e+g+i);
    return 0;
       
       
       
       
       
    

}