#include <stdio.h>

int main() {
    int n, i, isSorted = 1;
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }
    if(isSorted) {
        printf("Sorted\n");
    } else {
        printf("The array is NOT sorted.\n");
    }
    return 0;
}
