#include <stdio.h>
int main() {
int a,b,c;

printf("ENTER a:");
scanf("%d",&a);
printf("ENTER b:");
scanf("%d",&b);
printf("ENTER c:");
scanf("%d",&c);
(a>b&&a>c)?printf("a is greatest"):(b>a&&b>c)? printf("b is greatest"):
printf ("c is gratest");


 
 
 
 
}


or 

#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    (a>b&&a>c)? printf("a is greatest\n"): (b>c&&b>a)? printf("b is greatest\n"):
  printf("c is greatest");

  


}