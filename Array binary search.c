
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int start=0,count=0;
    int stop=sizeof(arr)/sizeof(int);
    int element;
    printf("ELEMENT:");
    scanf("%d",&element);
    while(1){
        int mid=start+(stop-start)/2;
        if(arr[mid]==element){
            printf("%d FOUND IN INDEX %d",element,mid);
            break;
        }
        else if(arr[mid] > element){
            stop=mid-1;
        }
        else if(arr[mid] < element){
            start=mid+1;
        }
        count++;
        if(count > stop){
            printf("ELEMENT NOT FOUND");
             break;
        }

    }
    return 0;
}