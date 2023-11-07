#include<stdio.h>
int main(){
    int num;
    char ch;
    printf("ENTER A CHARACTER:");
    scanf("%c",&ch);
   
    printf("ENTER THE NUMBER OF TIMES:");
    scanf("%d",&num);
    int i=1;
    do{
       printf("%c\n",ch);
       i++;
    }while(i<=num);

}