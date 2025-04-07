#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findLongestConsecutive(int arr[], int n) {
    if (n == 0)
        return 0;

    qsort(arr, n, sizeof(int), compare);

    int longest = 1;
    int current = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        } else if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else {
            if (current > longest)
                longest = current;
            current = 1;
        }
    }

    if (current > longest)
        longest = current;

    return longest;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int length = findLongestConsecutive(arr, n);
    printf("%d\n", length);

    return 0;
}
