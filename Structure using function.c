#include<stdio.h>
struct student{
    char name[100];
    int age;
   long  int phone_number;
    float cgpa;
};
void printinfo(struct student x){
    printf("NAME= %s\n",x.name);
    printf("AGE= %d\n",x.age);
    printf("PHONE NUMBER= %ld\n",x.phone_number);
    printf("CGPA= %f\n",x.cgpa);
}
int main(){
    struct student s1={"SARBIK",19,6290922505,9.2};
    printinfo(s1);

    return 0;
}