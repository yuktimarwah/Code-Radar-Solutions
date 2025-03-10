#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=64;
        int d=a+1;
        for(int j=1;j<=i;j++){
            char ch= (char)d;
            printf("%C ",ch);
            d++;

        }
        printf("\n");
    }
    return 0;
}