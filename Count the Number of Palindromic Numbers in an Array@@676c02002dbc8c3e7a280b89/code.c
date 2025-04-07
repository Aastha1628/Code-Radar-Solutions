#include <stdio.h>

int is_palindrome(int n) {
    int rev = 0, temp = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == temp;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (is_palindrome(a[i])) count++;
    }
    printf("%d", count);
    return 0;
}
