#include <stdio.h>
int main(){
    int num,n,newnum;
    scanf("%d %d",&num,&n);
    newnum = 1^(num>>n);
    printf("%d",newnum);
    return 0;
}