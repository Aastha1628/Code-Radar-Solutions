#include <stdio.h>

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    if (num & 0x80000000) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
