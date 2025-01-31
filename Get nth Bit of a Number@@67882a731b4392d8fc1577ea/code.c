#include <stdio.h>
int main(){
    int num1,position,result;
    scanf("%d %d",&num1,&position);
    result = (num1>>position)&1;
    printf("%d",result);
    return 0;

}