#include <stdio.h>
#define Int_Size sizeof(int)*8
int main(){
    int num,msb,count;
    scanf("%d",&num);
    msb = 1<<(Int_Size-1);
    count =0;
    for(int i;i<Int_Size;i++){
        if(msb&(num<<i)){
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}