#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[1001] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    int maxFreq = 0, result = 1001;
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < result)) {
            maxFreq = freq[arr[i]];
            result = arr[i];
        }
    }
    printf("%d", result);
    return 0;
}
