#include <stdio.h>
#include <math.h>
int main(){
    int a,;
    scanf("%d",&a);
    if(a==0||a==1){
        printf("Not Prime");
        return 0;
    }
    for(int i =2;i<=sqrt(a);i++){
        if(a%i==0){
            printf("Not Prime");
            return 0;
        }
    }
    if(count == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}