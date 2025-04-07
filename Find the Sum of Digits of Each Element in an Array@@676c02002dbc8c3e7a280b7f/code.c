#include <stdio.h>

int sumofdigits(int n) {
    if(n < 0) n = -n;
    if(n == 0) return 0;
    return (n % 10) + sumofdigits(n / 10);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", sumofdigits(a[i]));
    }
    return 0;
}
