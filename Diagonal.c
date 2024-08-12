#include <stdio.h>

int count_diagonals(int n, int k, int i) {
    if (k <= 0 || i == 0) {
        return 0; 
    }
    
    if (i == n) {
        return 1 + count_diagonals(n, k - i, i - 1); 
    } else {
        if (k >= 2 * i) {
            return 2 + count_diagonals(n, k - 2 * i, i - 1); 
        } else if (k >= i) {
            return 1 + count_diagonals(n, k - i, i - 1); 
        } else {
            return 0 + count_diagonals(n, k, i - 1);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d%d", &n, &k);
        
        int result = count_diagonals(n, k, n);
        printf("%d\n", result);
    }
    
    return 0;
}
