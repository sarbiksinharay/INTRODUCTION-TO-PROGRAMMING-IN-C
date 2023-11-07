#include<stdio.h>
int main() {
    int num_1,num_2,num_3;
    printf("ENTER 1ST NUMBER:");
    scanf("%d",&num_1);
     printf("ENTER 2ND NUMBER:");
    scanf("%d",&num_2);
     printf("ENTER 3RD NUMBER:");
    scanf("%d",&num_3);
    int avg=(num_1+num_2+num_3)/3;
    printf("AVERAGE OF THREE NUMBERS:%d",avg);
}