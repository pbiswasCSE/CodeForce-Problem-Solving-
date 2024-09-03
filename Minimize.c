#include<stdio.h>
int main(){
    int tt;scanf("%d",&tt);
    while(tt--){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",y-x);
    }
    return 0;
}