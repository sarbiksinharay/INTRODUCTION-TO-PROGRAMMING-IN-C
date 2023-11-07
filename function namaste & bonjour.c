#include<stdio.h>
void indian();
void french();
int main(){
    char ch;
    printf("ENTER i FOR INDIAN AND f FOR FRENCH:");
    scanf("%c",&ch);
    if(ch=='i'){
        indian();
    } else if(ch=='f'){
        french();
    }else {
        printf("WRONG INPUT!!");
    }



    return 0;
}
void indian(){
    printf("NAMASTE!!");
}
void french(){
    printf("BONJOUR!!");
}