#include<stdio.h>
int main() {
    int num;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    printf("THE REVERSE TABLE OF %d:\n",num);
    for(int i=10;i>=1;i--) {
       printf("%d\n",i*num);
    }
}