#include<stdio.h>
int main() {
  int num;
  int fact=1,i=1;
  printf("ENTER A NUMBER:");
  scanf("%d",&num);
  printf("THE FACTORIAL OF %d:\n",num);
 do {
      fact=fact*i;
      i++;

  }  while(i<=num);
  printf("%d\n",fact);

}