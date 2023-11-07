#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your birth year:");
    scanf("%d",&a);
      b=2023-a;
    printf("Your age is:%d\n",b);
    if (b<18) { printf("You are Minor");}
    else {printf("you are Adult");}
}