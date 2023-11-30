#include<stdio.h>
int strlen(char x[]);
int main(){
    char string[100];
    printf("ENTER THE STRING:");
    gets(string);
    int size=strlen(string);
    if(size%2==0){
        printf("STRING LENGTH= %d\nITS EVEN NUMBER",size);
    }else{
        printf("STRING LENGTH= %d\nITS ODD NUMBER",size);
    }
    return 0;
}
int strlen(char x[]){
    int length=0;
    while(x[length]!='\0'){
        length++;
    }
    return length;
}