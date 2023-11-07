#include<stdio.h>
int main() {
    int num;
    printf("ENTER THE RANGE:");
    scanf("%d",&num);
    printf("IN SEQUENCE:\n");
    for(int i=1;i<=num;i++){
         printf("%d\n\n",i);
        } 
     printf("IN REVERSE:\n");

     for(int i=num;i>=1;i--) {
        printf("%d\n\n",i);
     }


}