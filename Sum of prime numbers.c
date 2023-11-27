#include<stdio.h>
int isprime();
int main(){
    int lines;
    int sum=0;
    printf("ENTER THE LINES:");
    scanf("%d",&lines);
    for(int i=2;i<=lines;i++){
        if( isprime(i)){
           sum=sum+i;
        }

    }
    printf("SUM OF PRIME NUMBERS WITHIN %d IS: %d",lines,sum);


    return 0;
}
int isprime(int number){
    int temp=0,backup=0;
    for(int i=2;i<=number/2;i++){
        if(number%i==0){
            temp++;
            break;
        }

    }
    if(temp==0){
       backup=number;
    }

}