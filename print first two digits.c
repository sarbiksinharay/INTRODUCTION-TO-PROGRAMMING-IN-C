#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int c;
    c=a/100;
  if (a>10000) {
      printf("its not a four digit number");
      
  } else {
      printf ("%d",c);}
      return 0;
}

