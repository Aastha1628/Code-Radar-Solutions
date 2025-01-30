#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%400==0){
        printf("Leap year ");
    } else if (y%100==0){
        printf("Not a Leap Year");
    } if (y%4==0) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    return 0;
}