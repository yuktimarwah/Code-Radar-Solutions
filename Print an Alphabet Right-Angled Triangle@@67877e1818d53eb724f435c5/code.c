#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=65;
        for(int j=1;j<=i;j++){
            
            char ch = (char)d;
            printf("%C ",ch);
            d++;

        }
        printf("\n");
    }
    return 0;
}