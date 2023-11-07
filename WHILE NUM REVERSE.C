#include<stdio.h>
int main() {
    int x;
    int y=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&x);
   
    while(x>=y) {
        printf("%d\n",x--);
        printf("%d\n",x);
        printf("%d\n",--x);
        x--;
    }
}