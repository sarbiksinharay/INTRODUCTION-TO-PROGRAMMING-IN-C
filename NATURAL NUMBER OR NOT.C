#include<stdio.h>
int main() {
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if(num>=1) { 
        printf("ITS A NATURAL NUMBER\n");
    } else {
        printf("ITS NOT A NATURAL NUMBER\n");
    }
    printf("THANK YOU");
}