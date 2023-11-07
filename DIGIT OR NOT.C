#include<stdio.h>
#include<ctype.h>
int main() {
    char num;
    printf("ENTER A NUMBER:");
    scanf("%c",&num);
   
    if(isdigit(num)){
        printf("%c IS A DIGIT",num);
    } else{
        printf("%c IS NOT A DIGIT",num);
    } 
}