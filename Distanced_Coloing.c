#include<stdio.h>
int main(){
    int t;

scanf("%d", &t);
    
    while (t--) {
        int n, m,k,x,y;
        scanf("%d%d%d", &n, &m, &k);
        
        if(n>=k)x=k;
        else{x=n;}
        if(m>=k)y=k;
        else{y=m;}
        printf("%d\n",x*y);
    }
    
    return 0;
}
