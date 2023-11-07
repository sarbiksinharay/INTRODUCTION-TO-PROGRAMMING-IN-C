#include<stdio.h>
int main() {
    int num1,num2,sum1=0,sum2=0;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&num1);
      printf("ENTER THE SECOND NUMBER:");
   scanf("%d",&num2);
    for(int i=1,j=1;i<num1 && j<=num2;i++,j++){
        if(num1%i==0) {
            sum1=sum1+i;
        }
        if(num2%j==0){
            sum2=sum2+j;
        }
       
    } if(num1==sum2 && num2==sum1){
        printf("BOTH ARE AMICABLE NUMBER");
    } else {
         printf("BOTH ARE NOT AMICABLE NUMBER");
    }

}
