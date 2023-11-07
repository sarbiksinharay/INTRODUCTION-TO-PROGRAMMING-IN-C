#include<stdio.h>
int product(int a,int b);
int main(){
    int a,b;
    printf("ENTER A:");
    scanf("%d",&a);
    printf("ENTER B:");
    scanf("%d",&b);
    int newproduct= product(a,b);
    printf("A*B=%d",newproduct);



}
int product(int a,int b){
   int mul=a*b;
    return mul;
}