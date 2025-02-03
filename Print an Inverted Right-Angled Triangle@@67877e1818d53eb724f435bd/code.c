#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i++) {
        for(int j=0;j<=n+1-i;j++) {
            printf("* ");
        } 
        printf("\n");
    }
    return 0;
}