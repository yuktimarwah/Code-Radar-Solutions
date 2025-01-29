#include <stdio.h>
int main(){
    unsigned int a,b,result;
    scanf("%u %u",&a,&b);
    result = a&b;
    printf("%u",result);
    return 0;
}