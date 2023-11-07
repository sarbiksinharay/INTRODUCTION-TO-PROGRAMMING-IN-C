#include<stdio.h>
int main() {
    char ch;
    printf("ENTER A CHARACTER:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z') { printf("UPPER CASE CHARACTER");}
    else if(ch>='a' && ch<='z'){printf("LOWER CASE CHARACTER");}
    else{printf("NOT VALID INPUT");}
}