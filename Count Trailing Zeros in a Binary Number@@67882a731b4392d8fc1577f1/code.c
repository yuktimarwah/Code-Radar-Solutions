#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int num;
    scanf("%d",&num);
    int count = 0;
    for(int i =0;i<INT_SIZE;i++){
        if(1&(num>>i)){
            break;
        }
        count++;
    }
    printf("%d",count);

    return 0;
}