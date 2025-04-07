#include <stdio.h>

void countOddEven(int a[], int n, int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main(void) {
    int a[] = {4, 8, 5, 9, 7, 6, 2, 3, 1, 0};
    int n = 10;
    int oddCount, evenCount;

    countOddEven(a, n, &oddCount, &evenCount);

    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}



