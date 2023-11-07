#include<stdio.h>
int main(){

    int row,col;
    printf("ENTER THE ROW:");
    scanf("%d",&row);
    printf("ENTER THE COLUMN:");
    scanf("%d",&col);
    int arr[row][col];
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           printf("ENTER ELEMENT OF ROW %d AND COLUMN %d:",i,j);
           scanf("%d",&arr[i][j]);

       }
   }
   int new_row,new_col;
    printf("ENTER ROW:");
    scanf("%d",&new_row);
    printf("ENTER COLUMN:");
    scanf("%d",&new_col);
    printf("THE ELEMENT OF R:%d C:%d IS: %d",new_row,new_col,arr[new_row][new_col]);
}