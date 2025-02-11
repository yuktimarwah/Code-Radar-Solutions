#include <stdio.h>
#include <math.h>
int main(){
    int a,b,sq;
    scanf("%d %d",&a,&b);
    sq = sqrt(a);
    if(sq==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}