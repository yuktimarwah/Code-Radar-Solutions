#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    x = a^b;
    b=x^b;
    a=x^a;
    printf("%d %d",a,b);
    return 0;
}