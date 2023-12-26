#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int number;
    printf("ENTER THE NUMBER:");
    scanf("%d",&number);
    int backup=number;
    int rev=0;
    int krs=0;
    while(number>0){
        rev=number%10;
        krs= factorial(rev)+krs;
        number=number/10;


    }
    if(krs==backup){
        printf("KRISHNA MURTI NUMBER");
    }else{
        printf("NOT");
        }

}