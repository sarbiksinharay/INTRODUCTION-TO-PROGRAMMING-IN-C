#include<stdio.h>
int printstring(char arr[]);
int main(){
    char first_name[]={'S','A','R','B','I','K','\0'};
    char last_name[]={' ','S','I','N','H','A',' ','R','A','Y','\0'};
    printstring(first_name);
    printstring(last_name);

    return 0;
}
int printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }

}