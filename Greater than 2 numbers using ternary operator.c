#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER A:");
    scanf("%d",&a);
    printf("ENTER B:");
    scanf("%d",&b);
    (a>b)? printf("%d > %d",a,b) : (a==b)? printf("%d = %d",a,b) : printf("%d > %d",b,a);
    return 0;
}