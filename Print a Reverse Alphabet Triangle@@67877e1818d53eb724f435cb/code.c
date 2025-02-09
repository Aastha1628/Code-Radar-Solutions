#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = n - i; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
            if (j > 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
