#include <stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    if(a==0||a==1){
        count = 1;
    }
    for(int i =2;i<=a;i++){
        if(n%i==0){
            count++;
            break;
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