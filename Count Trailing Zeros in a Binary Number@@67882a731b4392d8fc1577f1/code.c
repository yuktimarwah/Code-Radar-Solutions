#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int num,msb;count;
    scanf("%d",&num);
    msb = 1<<(INT_SIZE-1);
    count = 0;
    for(int i =0;i<INT_SIZE;i++){
        if(msb&(num>>i)){
            break;
        }
        count++;
    }
    printf("%d",count);

    return 0;
}