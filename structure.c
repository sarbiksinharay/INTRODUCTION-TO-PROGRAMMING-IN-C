#include<stdio.h>
int main(){
    struct data{
        char name[20];
        long int ph_no;
        int age;
        char email[50];


    };
    struct data d;
    printf("ENTER THE NAME:");
    gets(d.name);
    printf("ENTER EMAIL:");
    gets(d.email);
    printf("ENTER PHONE NUMBER:");
    scanf("%ld",&d.ph_no);
    printf("ENTER THE AGE:");
    scanf("%d",&d.age);
    printf("\n");
    printf("NAME:");
    puts(d.name);
    printf("EMAIL:");
    puts(d.email);
    printf("PHONE NUMBER: %ld\nAGE: %d",d.ph_no,d.age);




    return 0;
}


