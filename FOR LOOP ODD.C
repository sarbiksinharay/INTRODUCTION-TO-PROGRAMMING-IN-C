#include<stdio.h>
int main(){
  int num;
  printf("ENTER A RANGE:");
  scanf("%d",&num);
   printf("ODD NUMBERS:\n");
  for(int i=1;i<=num;i++)
{
  if(i%2==1){
   
    printf("%d\n",i);
  }
}
}