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
}
    int isprime(n){
        if(n==0||n==1){
            return 0;
        }
        for(int i=2;i<n/2;i++){
            if(n%i==0){
            return 0;
            }
        }
        return 1;
    }
