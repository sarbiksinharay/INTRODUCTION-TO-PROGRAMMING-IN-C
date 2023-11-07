#include<stdio.h>
int main() {

    int row, col;
    printf("ENTER THE ROW:");
    scanf("%d", &row);
    printf("ENTER THE COLUMN:");
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("ENTER ELEMENT OF ROW %d AND COLUMN %d:\n", i, j);
            scanf(" %d", &arr[i][j]);

        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d",arr[i][j]);


        }
        printf("\n");
    }
}