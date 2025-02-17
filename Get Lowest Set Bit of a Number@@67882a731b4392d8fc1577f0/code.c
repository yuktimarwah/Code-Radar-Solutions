#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int num;
    scanf("%d",&num);
    int order=INT_SIZE-1;
    for(int i = 0;i<=INT_SIZE;i++){
        if(1&(num<<i)){
            order=i;
            break;
        }
    }
    printf("%d",order);

    return 0;
}