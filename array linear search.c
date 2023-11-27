#include<stdio.h>
int main(){
    int element;
    int arr[5]={10,20,30,40,50};
    printf("ENTER THE ELEMENT:");
    scanf("%d",&element);
    int found=0;
    for(int i=1;i<5;i++){
        if(element==arr[i]){
            printf("found in %d",i);
            found=1;
            break;
        }
        }
    if(found==0){
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}