#include <stdio.h>
#include <math.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    if(a==0||a==1){
        printf("Not Prime");
        return 0;
    }
    for(int i =2;i<=sqrt(a);i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}