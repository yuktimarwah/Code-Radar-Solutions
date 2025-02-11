// Your code here...
#include <stdio.h>
int main(){
    int a,b,r;
    scanf("%d %d",&a,&b);
    r = a%b;
    if(r==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}