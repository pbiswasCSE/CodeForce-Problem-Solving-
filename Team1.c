#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][3];

    int i,j;
    for ( i = 0; i < n; i++)
    {
      
            scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    
    }
    int temp=0;
     for ( i = 0; i < n; i++)
    {
    if (a[i][0]+a[i][1]+a[i][2]>1)
    {
        ++temp;
    }
    }
    printf("%d",temp);
    return 0;
}