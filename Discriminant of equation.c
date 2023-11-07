#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    printf("Discriminant of equation:%f",b*b-4*a*c);
    return 0;
}