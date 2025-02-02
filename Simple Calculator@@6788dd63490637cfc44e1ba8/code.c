#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    l=a+b;
    m=a-b;
    n=a*b;
    o=a/b;
    scanf("%d%d%d%d",&l,&m,&n,&o);
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