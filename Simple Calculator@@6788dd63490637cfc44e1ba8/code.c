#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if (ch=='+') {
        printf("%d\n",a+b);
    } else if (ch=='-') {
        printf("%d\n",a-b);
    } else if (ch=='*') {
        printf("%d\n",a*b);
    } else if (ch=='/') {
        if (b!=0) {
            printf("Error\n");
        } else {
            printf("%.0f",(float)a/b);
        }
    } else {
        printf("Error\n");
    }
    return 0;
}