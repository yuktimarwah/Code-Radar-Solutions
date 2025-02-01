#include <stdio.h>
int main(){
    int a;
    float by5,by3;
    scanf("%d",&a);
    by5 = a%5;
    by3 = a%3;
    if(by5==0&&by3==0){
        printf("Divisible by Both");
    }
    else if(by5==0){
        printf("Divisible by 5");
    }
    else if(by3==0){
        printf("Divisible by 3");
    } 
    else{
        printf("Not Divisible");
    }
    return 0;
}