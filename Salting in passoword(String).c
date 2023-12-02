#include<stdio.h>
#include<string.h>
void salting(char arr[]);
int main(){
 char password[50];
    printf("ENTER YOUR PASSWORD:");
   gets(password);
    printf("YOUR SALTED PASSWORD: ");
    salting(password);

    return 0;
}
void salting(char arrs[]){
    char salt[]="123";
    char new_pw[50];
    strcpy(new_pw,arrs);
    strcat(new_pw,salt);
    puts(new_pw);

}