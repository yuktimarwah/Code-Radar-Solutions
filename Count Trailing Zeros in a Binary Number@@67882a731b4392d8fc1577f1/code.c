#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int num,msb;count;
    scanf("%d",&num);
    count = 0;
    for(int i =0;i<INT_SIZE;i++){
        if(1&(num>>i)){
            break;
        }
        count++;
    }
    printf("%d",count);

    return 0;
}