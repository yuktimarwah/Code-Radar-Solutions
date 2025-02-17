#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    x = a^b;
    a=x^b;
    b=x^a;
    printf("%d %d",a,b);
    return 0;
}