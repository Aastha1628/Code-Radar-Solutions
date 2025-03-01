#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // Rows
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print alphabets
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
            if (j < i) {  // Add space only between characters, not at the end
                printf(" ");
            }
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
