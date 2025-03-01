#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // Rows
        for (int j = 0; j < n - i - 1; j++) {  // Print spaces
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {  // Print alphabets
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
