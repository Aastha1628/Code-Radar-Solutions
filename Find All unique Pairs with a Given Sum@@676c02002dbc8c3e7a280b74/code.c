#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i], b = arr[j];
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                int seen = 0;
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        int x = arr[k], y = arr[l];
                        if (x + y == target) {
                            if (x > y) {
                                int temp = x;
                                x = y;
                                y = temp;
                            }
                            if (x == a && y == b) {
                                seen = 1;
                                break;
                            }
                        }
                    }
                    if (seen) break;
                }

                if (!seen) {
                    printf("%d %d\n", a, b);
                }
            }
        }
    }

    return 0;
}
