#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    l=a+b;
    m=a-b;
    n=a*b;
    o=a/b;
    if (c=='+') {
        printf("%d",l);
    } else if (c=='-') {
        printf("%d",m);
    } else if (c=='*') {
        printf("%d",n);
    } else if (c=='/') {
        printf("%d",o);
    } else {
        printf("Error");
    }
    return 0;
}