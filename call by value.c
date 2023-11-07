#include<stdio.h>
int num,x;
int add(int x);
int main(){
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    add(num);
    return 0;
}
int add(int x){
    x=x+5;
    int a;
    a=x;
    printf("%d + 5= %d",num,x);

}