#include <stdio.h>
int main(){
    int num,n,newnum;
    scanf("%d %d",&num,&n);
    newnum = num &(~(1<<n));
    printf("%d",newnum);
    return 0;
}