#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=1;j--){
            printf("2");
        }
        
        printf("\n");
    }
    return 0;
    }