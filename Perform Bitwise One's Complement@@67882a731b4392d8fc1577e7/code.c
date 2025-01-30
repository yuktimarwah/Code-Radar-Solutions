#include <stdio.h>
int main(){
    unsigned int a,result;
    scanf("%u",&a);
    result = ~a;
    printf("%u",result);
    return 0;
}