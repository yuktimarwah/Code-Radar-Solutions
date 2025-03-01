void printArray( int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    printf("\n");
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
    }

}