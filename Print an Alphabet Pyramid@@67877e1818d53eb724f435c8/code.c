#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=64;
        int d=a+1;
        char ch= (char)d;
        for(int j=1;j<=i;j++){
            printf("%C ",ch);
            a++;

        }
        printf("\n");
    }
    return 0;
}