#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], min = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            second = min;
            min = arr[i];
        } else if (arr[i] > min && arr[i] < second) {
            second = arr[i];
        }
    }
    if (second == INT_MAX)
        printf("-1\n");
    else
        printf("%d\n", second);
    return 0;
}
