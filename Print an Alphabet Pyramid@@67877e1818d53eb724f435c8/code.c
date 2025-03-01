#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // Rows
        for (int j = 0; j < n - i - 1; j++) {  // Print leading spaces
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {  // Print alphabets
            printf("%c", 'A' + j);
            if (j != i) {  // Avoid trailing space at the end of the line
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}

