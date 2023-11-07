#include<stdio.h>
int main() {
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
   if (num>=0) { 
    printf("POSITIVE");
    if(num%2==0) {
        printf(" EVEN NUMBER");
    } else { printf(" ODD NUMBER");}
   } else { 
    printf("NEGATIVE ");
    if(num%2==0) {
        printf(" EVEN NUMBER");
    } else { printf(" ODD NUMBER");}
   }
}