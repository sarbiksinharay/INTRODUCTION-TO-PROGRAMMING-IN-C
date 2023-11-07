#include<stdio.h>
int main(){
    int *ptr;
    int x;
    ptr=&x;
    *ptr=0;
    printf("VALUE:  %d\n",x);
    printf("%d\n",*(&x));
    printf("%d\n",*ptr);
    *ptr+=5;
    printf("VALUE:  %d\n",x);
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("VALUE:  %d\n",x);
    printf("%d\n",*ptr);


}
