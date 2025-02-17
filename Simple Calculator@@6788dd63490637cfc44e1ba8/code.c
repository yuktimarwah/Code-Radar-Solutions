#include <stdio.h>
int main(){
    char op;
    int a,b,r;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a+b);
        break;
        case'*':
       printf("%d",a+b);
        break;
        case'/':
       printf("%d",a+b);
        break;
        default:
        printf("error");
    }

    return 0;
}