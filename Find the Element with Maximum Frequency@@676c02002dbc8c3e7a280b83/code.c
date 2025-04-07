#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[100001] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    int maxFreq = 0, result = 100001;
    for (int i = 0; i < 100001; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < result)) {
            maxFreq = freq[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}
