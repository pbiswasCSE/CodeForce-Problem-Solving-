#include<stdio.h>
#include <stdlib.h> 

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int arr[40];
        int x, y;
        
        
        scanf("%d", &x);
        
        
        for(int i = 0; i < x; i++) {
            scanf("%d", &arr[i]);
        }

        
        if(x>2) {
            printf("NO\n");  
        } else {
            y = abs(arr[0] - arr[1]);
            if(y == 1) {
                printf("NO\n");  
            } else {
                printf("YES\n");  
            }
        }
    }
    return 0;
}