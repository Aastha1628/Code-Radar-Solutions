#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        // Print spaces (decreasing)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (increasing)
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
