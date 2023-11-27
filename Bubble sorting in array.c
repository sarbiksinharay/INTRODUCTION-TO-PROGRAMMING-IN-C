#include<stdio.h>
int main(){
    int arr[]={12,0,48,400,51,47,58,18,49,200,112};
    int size=sizeof(arr)/sizeof(int);
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}