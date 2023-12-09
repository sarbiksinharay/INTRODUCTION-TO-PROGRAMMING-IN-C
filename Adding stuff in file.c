#include<stdio.h>
int main(){
    FILE *ff;
    char file_name[100];
    char meterial[100];
    char new_meterial[100];
    printf("ENTER THE FILE NAME:");
    gets(file_name);
    ff=fopen(file_name,"r");
    if(ff!=NULL){
        printf("FILE EXIST\n");
        fgets(meterial,100,ff);
        printf("FILE METERIAL:\n");
        puts(meterial);
        printf("\n");
        ff=fopen(file_name,"a");
        printf("ENTER YOUR STUFF:");
        fgets(new_meterial,100,stdin);
        fprintf(ff,new_meterial);
        fclose(ff);
    }else{
        printf("FILE NOT FOUND");
    }
    return 0;
}