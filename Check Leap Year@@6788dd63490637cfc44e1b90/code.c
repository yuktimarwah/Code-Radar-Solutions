// Your code here...
#include <stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    if((y%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}