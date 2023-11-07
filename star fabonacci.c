#include<stdio.h>
int main(){
    int lines,temp1=1,temp2=1,backup=0;
    printf("ENTER THE NUMBER OF LINES:");
    scanf(" %d",&lines);
    for(int i=0;i<=lines;i++){
        for(int j=0;j<=temp1;j++){
            printf("*");
        }


       printf("\n");
       backup=temp2;
       temp2=temp2+temp1;
       temp1=backup;
//       printf(" %d",temp2);
    }
}