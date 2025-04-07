#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], leaders[n], index = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[n - 1];
    leaders[index++] = max;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= max) {
            max = arr[i];
            leaders[index++] = max;
        }
    }
    for(int i = index - 1; i >= 0; i--)
        printf("%d ", leaders[i]);
    return 0;
}
