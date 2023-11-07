#include<stdio.h>
int main() {
    float num;
    printf("ENTER A NUMBER:");
    scanf("%f",&num);
    if (num==(int)num) {
        if ((int)num>=1) {
            printf("NATURAL NUMBER\n& POSITIVE INETGER");
        }
        else {
            printf("NEGATIVE INTEGER NUMBER");
        }
   
    } else if(num==num) {
        printf("REAL NUMBER");
    }
    else{
        printf("WRONG INPUT");
    }



}