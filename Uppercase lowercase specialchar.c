#include<stdio.h>
int main(){
    char alph;
    printf("ENTER THE CHARACTER:");
    scanf("%c",&alph);
    if(alph>=65 && alph<=90){
        printf("UPPERCASE");
    }else if(alph>=97 && alph<=122){
        printf("LOWER CASE");
    }else{
        printf("WRONG INPUT");
    }
    return 0;
}