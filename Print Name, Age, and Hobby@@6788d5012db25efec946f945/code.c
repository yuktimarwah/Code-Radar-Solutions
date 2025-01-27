#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",hobby);
    printf("Name:\n %s",name);
    printf("Age:\n %d",age);
    printf("Hobby:\n %s",hobby)
    return 0;
}