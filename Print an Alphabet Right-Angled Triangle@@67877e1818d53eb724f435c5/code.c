#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char j=1;j<=i;j++){
            printf("%C ",j);

        }
        printf("\n");
    }
    return 0;
}