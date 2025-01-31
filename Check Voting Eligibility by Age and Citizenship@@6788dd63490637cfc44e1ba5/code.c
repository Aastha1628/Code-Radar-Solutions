#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>=18 && ((b=1)||(b=0))) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}