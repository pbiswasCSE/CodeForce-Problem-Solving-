#include<stdio.h>
struct Team
{
    int p,v,t;
};
int main(){
    int n;
    scanf("%d",&n);

    struct Team team[n];
    int i;
    for ( i = 0; i < (n-1); i++)
    {
        scanf("%d %d %d\n",&team[i].p,&team[i].v,&team[i].t);
    }
    int temp=0;
    for ( i = 0; i < n-1; i++)
    {
        if ((team[i].p + team[i].v + team[i].t) >1)
        {
           ++temp; 
        
    }
    }
    prinf("%d",temp)
    return 0;

}