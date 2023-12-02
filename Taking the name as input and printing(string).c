#include<stdio.h>
int main(){
    char first_name[20],last_name[20];
    printf("ENTER YOUR FIRST NAME:\n");
    gets(first_name);
    printf("ENTER YOUR LAST NAME:\n");
    gets(last_name);
    printf("YOUR NAME IS %s %s",first_name,last_name);

    return 0;
}