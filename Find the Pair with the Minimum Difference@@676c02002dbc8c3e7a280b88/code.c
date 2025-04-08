#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);
    int minDiff = INT_MAX;
    int first = 0, second = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < minDiff) {
            minDiff = diff;
            first = arr[i - 1];
            second = arr[i];
        }
    }

    printf("%d %d", first, second);

    return 0;
}
