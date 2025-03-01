void printArray( int arr,int n){
    for(int i=0;i<n;i++){
    printf("%d",bubbleSort(arr,n));
    }
    return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
void bubbleSort(arr,n){
    for(int i=0;i<n-1,i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[i+1]){
                swap(i,i+1);
            }
        }
    }
    return 0;

}