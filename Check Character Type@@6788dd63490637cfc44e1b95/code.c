// Your code here...
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='i'||ch=='I'||ch=='u'||ch=='U'){
        printf("Vowel");
    }
    else if(ch>=0&&ch<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}