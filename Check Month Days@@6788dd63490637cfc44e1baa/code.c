#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 3:
        printf("31");
        break;
        case 4:
        printf("30");
        break;
        case 5:
        printf("31");
        break;
        case 12:
        printf("31");
        break;
        default:
        printf("Invalid month");
    }
    return 0;
}