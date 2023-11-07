#include<stdio.h>
int main() {
    int num;
    printf("ENTER A NUMBER:");
     scanf("%d",&num);
    (num>0)? printf("POSITIVE NUMBER") : (num==0 )?  printf("0 is NEUTRAL"): printf("NEGATIVE NUMBER");
 }

#include<stdio.h>
int main() {
    int num;
    printf("ENTER A NUMBER:");
     scanf("%d",&num);
    (num>0)? printf("POSITIVE ") : (num==0 )?  printf("0 is NEUTRAL\n"): printf("NEGATIVE");
    int mod=num%2;
    (mod==0)?printf(" EVEN NUMBER"):printf(" ODD NUMBER");
 }