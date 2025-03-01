#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int swapped = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped =1;
            }
            }
            if (swapped==0){
                return 1;
        }
    }
     return 0;

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    if(bubblesort( arr, n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}