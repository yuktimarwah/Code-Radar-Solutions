#include <stdio.h>

    int isprime(int n){
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
