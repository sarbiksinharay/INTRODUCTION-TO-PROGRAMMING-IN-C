#include<stdio.h>
#include<stdlib.h>
void main(){
 int num;
 printf("ENTER 0 FOR EXIT\n");
    l5:
 printf("ENTER THE NUMBER:");
 scanf("%d",&num);
 if(num>0){
     for(int i=1;i<=10;i++){
         printf("%d x %d= %d\n",num,i,i*num);
     }
     goto l5;
 }
 else{

     exit(0);
 }
}