#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[100001] = {0};
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
