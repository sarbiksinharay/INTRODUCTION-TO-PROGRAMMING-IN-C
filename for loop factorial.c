#include<stdio.h>
int main() {
  int num;
  printf("ENTER A NUMBER:");
  scanf("%d",&num);
  printf("FACTORIAL OF %d:\n",num);
  int fact=1;
  for(int i=1;i<=num;i++) {
    fact=fact*i;
   
  }  printf("%d\n",fact);
}