#include<stdio.h>
int main(){
    int i=5;
    int *pptr=&i;
    int **ppntr=&pptr;
    printf("%d\n",i);
    printf("%d\n",*pptr);
    printf("%d\n",**ppntr);
    printf("%d\n",*(&i));
   
}