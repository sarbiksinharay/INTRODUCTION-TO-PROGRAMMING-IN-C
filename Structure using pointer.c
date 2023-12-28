#include<stdio.h>
struct details{
    char name[100];
    int age;
    float height;
};
int main(){
    struct details s1={"sarbik",19,5.9};
    struct details *ptr=&s1;
    printf("NAME= %s\nAGE=%d\nHEIGHT=%f",(*ptr).name,ptr->age,ptr->height);


    return 0;
}
