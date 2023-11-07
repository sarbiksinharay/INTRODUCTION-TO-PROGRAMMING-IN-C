#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    float c_1,c_2,m;
    printf("ENTER C1:");
    scanf(" %f",&c_1);
    printf("ENTER C2:");
    scanf(" %f",&c_2);
    printf("ENTER M:");
    scanf("%f",&m);
    float distance=abs(c_2-c_1)/(sqrt(1+pow(m,2)));
    printf("DISTANCE BETWEEN TWO LINES:%f",distance);
    

}