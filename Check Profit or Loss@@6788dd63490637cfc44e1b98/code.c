#include <stdio.h>
int main(){
    int c,s;
    scanf("%d %d",&c,&s);
    if(c=s){
        printf("No Profit No Loss");
    }
    else if(c>s){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}