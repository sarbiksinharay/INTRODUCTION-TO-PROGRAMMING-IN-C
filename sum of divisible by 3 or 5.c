#include<stdio.h>
int main()
{
  int a,b,c=0;
  printf("Enter your range=");
  scanf("%d",&a);
  for(b=1;b<=a;b++)
  {
    if(b%3==0 || b%5==0)
       {
         c=c+b;
       }
  }
  printf("your sum is %d",c);
  return 0;
}