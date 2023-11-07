#include<stdio.h>
#include<stdlib.h>
int fact=1,i,num;
void factorial(int num);
int main(){
    printf("ENTER THE  NUMBER:");
    scanf("%d",&num);
    factorial(num);
    return 0;
}
void factorial(int num){
    fact=fact*num;
    i=num-1;
    if(i==1){
        printf("FACTORIAL:%d",fact);
        exit(0);
    } else{
        factorial(i);
    }

}
