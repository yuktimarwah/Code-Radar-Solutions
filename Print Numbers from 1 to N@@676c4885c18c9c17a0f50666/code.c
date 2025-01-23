#include <stdio.h>
int main(){
    float N;
    scanf("%f",&N);
    for(float i = 1;i<=N;i++){
        printf("%f",i);
        if(i !=N-1){
            printf(" ");
        }
    }
    return 0;
}