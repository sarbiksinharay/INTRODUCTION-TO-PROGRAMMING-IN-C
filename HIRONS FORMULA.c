#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    int s=(a+b+c)/2;
    int Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("By Hirons Triangle Formula:%d",Area);

}
