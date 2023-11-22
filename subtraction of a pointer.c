#include<stdio.h>
int main(){
    int age=18;
    int new_age=10;
    int *ptr=&age;
    int *new_ptr=&new_age;
    printf("DIFFERENCE: %u  %u \n = %u",ptr,new_ptr,ptr-new_ptr);
    return 0;
}