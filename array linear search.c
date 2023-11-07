#include<stdio.h>
int main(){
    int arr[5]={12,24,36,48,60};
    int element;
    printf("ENTER THE NUMBER:");
    scanf("%d",&element);
    for(int i=0;i<5;i++){
        if(arr[i]==element){
            printf("ELEMENT %d FOUND IN INDEX:%d",element,i);
            break;
        } else{
            printf("NO INDEX FOUND !");
            break;
        }
    }
}