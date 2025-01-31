#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (ch>=a && ch<=z) {
        printf("Uppercase");
    } else if (ch >= A && ch <= Z) {
        printf("Lowercase");
    } else {
        printf("Not a Character");
    }
    return 0;
}