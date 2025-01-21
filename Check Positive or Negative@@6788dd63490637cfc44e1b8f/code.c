#include <stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a=0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;

}