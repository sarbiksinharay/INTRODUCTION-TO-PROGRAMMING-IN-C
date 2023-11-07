#include<stdio.h>
int main() {
    int num;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,j*i);
            
        }
    
         printf("_____________\n");
    }
}