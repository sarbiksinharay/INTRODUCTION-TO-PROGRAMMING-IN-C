#include<stdio.h>
int main(){
    int lines,temp=1;
    printf("ENTER LINES:");
    scanf("%d",&lines);
    for(int i=lines;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=temp;k++){
            printf("*");
        }
        temp=temp+2;
        printf("\n");
    }
}