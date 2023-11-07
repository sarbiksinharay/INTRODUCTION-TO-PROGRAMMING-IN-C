#include<stdio.h>
int main(){
    int lines;
    printf("ENTER LINES:");
    scanf("%d",&lines);
    int plus=1;
    for(int i=1;i<=lines;i++){

        for(int j=1;j<=plus;j++){
            printf("*");
        }
        plus=plus+2;
        printf("\n");

    }
}