#include<stdio.h>
void swap(int a,int b);
int main() {
    int a, b, c;
    printf("ENTER A:");
    scanf("%d", &a);
    printf("ENTER B:");
    scanf("%d", &b);
   swap(a,b);

}
    void swap(int a,int b){

      int  c=a;
        a=b;
        b=c;
        printf("A=%d\nB=%d",a,b);