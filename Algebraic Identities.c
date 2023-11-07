#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    float d=a*a+2*a*b+b*b; //(a+b)^2
    float e=a*a-2*a*b+b*b;//(a-b)^2
    float f=(a+b)*(a-b);//a^2-b^2
    float g=a*a+b*b+c*c+2*a*b+2*b*c+2*c*a;//(a+b+c)^2
    float i=a*a+b*b+c*c+2*a*b-2*b*c-2*c*a;//(a+b-c)^2
    float j=a*a+b*b+c*c-2*a*b-2*b*c+2*c*a;//(a-b+c)^2
    float k=a*a*a+3*a*a*b+3*a*b*b+b*b*b;//(a+b)^3
    printf("(a+b)^2:%f\n",d);
    printf("(a-b)^2:%f\n",e);
    printf("a^2-b^2:%f\n",f);
    printf("(a+b+c)^2:%f\n",g);
    printf("(a+b-c)^2:%f\n",i);
    printf("(a-b+c)^2:%f\n",j);
    printf("(a+b)^3:%f\n",k);
}