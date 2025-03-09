#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            int d=65;
            char ch = (char)d;
            printf("%C ",ch);
            d++;

        }
        printf("\n");
    }
    return 0;
}