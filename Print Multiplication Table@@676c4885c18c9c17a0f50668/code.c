#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=11;i++){
        printf("%d X %d = %d\n",N,i,N*i);
    }
    return 0;
    
}