#include <stdio.h>

int main() {
    int n, inc = 1, dec = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) inc = 0;
        if (a[i] > a[i - 1]) dec = 0;
    }
    printf("%d", inc || dec);
    return 0;
}
