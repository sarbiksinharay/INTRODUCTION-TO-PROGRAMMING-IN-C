#include<stdio.h>
int main() {
    float a;
    printf("Enter Rupee:");
    scanf("%f",&a);
    printf("DOLLAR:%f\n",a*0.0121);
    printf("RUBLE:%f\n",a*1.1592);
    printf("YUAN:%f\n",a*0.0878);
    printf("EURO:%f\n",a*0.0112);
    return 0;
}