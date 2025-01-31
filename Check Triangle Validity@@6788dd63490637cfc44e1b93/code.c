#include <stdio.h>
int main() {
    int p,b,h,a;
    scanf("%d%d%d",&p,&b,&h);
    a=p*p+b*b-h*h;
    scanf("%d",&a);
    if (a==0) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    return 0;
}