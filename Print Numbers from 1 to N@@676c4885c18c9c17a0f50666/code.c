#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(float i = 1;i<=N;i++){
        printf("%f",i);
        if(i !=N-1){
            printf(" ");
        }
    }
    return 0;
}