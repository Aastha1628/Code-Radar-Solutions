#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if(a == 'A') {
        printf("Excellent\n");
    } else if(b == 'B') {
        printf("Good\n");
    } else if(a == 'C') {
        printf("Average\n");
    } else if(a == 'D') {
        printf("Below Average\n");
    } else if(a == 'F') {
        printf("Fail\n");
    } else {
        printf("Invalid grade");
    }
    return 0;
}