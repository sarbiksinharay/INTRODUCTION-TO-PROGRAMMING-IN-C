#include<stdio.h>
int main(){
    int arr[]={100,12,84,25,9,45};
    int size=sizeof(arr)/sizeof(int);
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
        if(arr[i] < smallest){
            smallest=arr[i];
        }
    }
    printf("LARGEST NUMBER OF ARRAY: %d\n",largest);
    printf("SMALLEST NUMBER OF ARRAY: %d\n",smallest);
}