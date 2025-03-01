#include <stdio.h>
int isprime();
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    int isprime(num){
        if(num==0||num==1){
            return 0;
        }
        
    }
}