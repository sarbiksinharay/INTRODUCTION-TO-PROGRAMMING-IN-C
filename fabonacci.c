#include<stdio.h>
int main(){
    int lines,temp1=1,temp2=0,backup=0;
    printf("ENTER THE NUMBER OF LINES:");
    scanf(" %d",&lines);
    printf("%d\n",0);
    for(int i=1;i<lines;i++){
        backup=temp2;
        temp2=temp2+temp1;
        temp1=backup;
        printf("%d\n",temp2);
    }
}