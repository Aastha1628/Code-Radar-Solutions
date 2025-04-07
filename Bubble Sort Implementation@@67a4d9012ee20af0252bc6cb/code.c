#include <stdio.h>
void bubblesort(int a[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    for(int i=0;i<n;i++){
        scanf("a[%d]=%d\n",i,a[i]);
    }
}