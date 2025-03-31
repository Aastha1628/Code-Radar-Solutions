#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){   // Starting from 1 to n
        for(int j = 0; j < i; j++){  // Adjusted to print characters correctly
            printf("%c", 'A' + j);
            if(j < i - 1){
                printf(" ");
            }
        }
        printf("\n");  // Printing newline after each row
    }
    return 0;
}
