#include<stdio.h>
int main(){
    int a=5,b=10,c=15,d=20,e=25;
    int *arr[5]={&a,&b,&c,&d,&e};
    for(int i=0;i<5;i++){
        printf("%d\n",*arr[i]);
    }
}