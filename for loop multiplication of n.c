#include<stdio.h>
int main() {
  int num;
printf("ENTER A NUMBER:");
scanf("%d",&num);
printf("MULTIPLICATION OF %d:\n",num);

for(int i=1;i<=10;i++)
{
  printf("%d\n",num*i);
}

}