#include<stdio.h>
#include<stdlib.h>
int main(){
    int age;

    printf("LEVES CLUB AND LODGE\n(only for Adults only)\n");
    l7:
    printf("ENTER YOUR AGE:");
    scanf(" %d",&age);
  if(age>=18){
      printf("WELCOME TO THE CLUB ");
      exit(0);
  } else{
      printf("PLEASE TRY AGAIN\n");
      goto l7;
  }
}