#include<stdio.h>
int main() {
    int num;
    do {
        printf("ENTER THE NUMBER:");
        scanf("%d",&num);
        if (num%2!=0){
             printf("END!!");
        break;
        }

    } while(num>0);
}