#include <stdio.h>

int main() {
    int n, max = -1;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("%d", max);
    return 0;
}
