#include<stdio.h>
int main() {
float kb;
printf("ENTER KB:");
scanf("%f",&kb);
printf("KB TO MB:%f\n",kb/1024);
printf("KB TO GB:%f\n",kb/(1024*1024));
printf("KB TO TB:%f\n",kb/(1024*1024*1024));



}
