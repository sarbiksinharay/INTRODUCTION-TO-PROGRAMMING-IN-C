#include<stdio.h>
int num;
int add(int *ptr);
int main(){
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    add(&num);

}
int add(int *ptr){
    ptr=&num;
      printf("%d",*ptr);
}