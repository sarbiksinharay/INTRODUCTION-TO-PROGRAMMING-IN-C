#include<stdio.h>
int main() {
  int num;
  printf("ENTER A RANGE OF NUMBER:");
  scanf("%d",&num);
  int i=1;
  while(i<=num) {
   if(i%2==0) {
    printf("%d\n",i);
  
   }
     i++;
  }
}