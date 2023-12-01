#include<stdio.h>
int main(){
    int n;
    printf("ENTER INDEX:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("ENTER THE %d ELEMENT:\n",i+1);
        scanf(" %d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    printf("SMALLEST NUMBER: %d\n",smallest);
    printf("LARGEST NUMBER: %d\n",largest);
    return 0;
}