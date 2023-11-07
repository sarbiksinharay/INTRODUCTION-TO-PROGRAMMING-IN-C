#include<stdio.h>
int main(){
    int arr[6][5]={
            {2,4,6,8,10},
            {3,6,9,12,15,},
            {4,8,12,16,20},
            {5,10,15,16,20},
            {6,12,18,24,30},
            {7,14,21,28,35}
    };
    int row,col;
    printf("ENTER THE ROW:");
    scanf("%d",&row);
    printf("ENTER THE COLUMN:");
    scanf("%d",&col);
    printf("element:%d",arr[row][col]);
}