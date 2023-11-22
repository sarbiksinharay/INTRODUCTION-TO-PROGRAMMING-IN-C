#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *hp;
    char output[100];
    char file_name[100];
    l1:
    printf("ENTER THE FILE NAME WITH TYPE:");
    gets(file_name);
    hp=fopen(file_name,"r");
    if(hp != NULL){
        printf("FILE FOUND:\n");
        fgets(output,100,hp);
        printf("%s",output);
    }else{
        
        printf("ERROR\n");
        goto l1;
    }
    
    
    return 0;
}