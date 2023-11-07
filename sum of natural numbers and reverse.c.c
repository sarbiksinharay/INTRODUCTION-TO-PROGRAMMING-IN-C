#include<stdio.h>
int main() {
    int num;
    printf("ENTER THE RANGE:");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
        } 
     printf("THE SUM OF NUM:%d\n\n",sum);

     for(int i=num;i>=1;i--) {
        printf("%d\n\n",i);
     }


}