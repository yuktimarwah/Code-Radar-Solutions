void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

bubblesort(int arr[n],int n){
    for(int i=0;i<n-1;i++){
        int swapped = 0;
        for(int j=0;j-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped =1
            }
            if ()swapped==0){
                return 0;
            }
            return 1;
        }
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n,i++){
    scanf("%d",&arr[i])
    }
    if(bubblesort(int arr[n],int n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}