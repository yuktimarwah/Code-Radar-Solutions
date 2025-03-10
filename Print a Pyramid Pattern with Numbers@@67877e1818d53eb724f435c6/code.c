#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        a=n-1;
        for(int j=1;j<=a;j++){
            printf(" ");
            a--;
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
    }