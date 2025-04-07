void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIDx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIDx]){
                smallestIDx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallestIDx];
        arr[smallestIDx]=temp;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}