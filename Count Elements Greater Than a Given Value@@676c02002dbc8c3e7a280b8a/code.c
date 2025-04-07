#include <stdio.h>

int main() {
    int n, k, count = 0;
    scanf("%d", &n);              // Read array size
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);       // Read array elements
    }
    scanf("%d", &k);              // Read value of k
    for(int i = 0; i < n; i++) {
        if(a[i] > k) {
            count++;              // Count if element is greater than k
        }
    }
    printf("%d", count);          // Output the result
    return 0;
}
