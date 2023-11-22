#include<stdio.h>
int main(){
    FILE *fl;
    char output[100];
    fl= fopen("C:/Users/sinha/CLionProjects/hello.txt","r");
        if(fl!=NULL){
            fgets(output,100,fl);
            printf("THE OUTPUT: \n%s",output);
        } else{
            printf("ERROR !");
        }
    return 0;
}