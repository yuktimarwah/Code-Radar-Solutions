#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1;i<N;i++){
        printf("%d",i);
        if(i !=N){
            printf(" ");
        }
    }
    return 0;
}