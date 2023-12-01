#include<stdio.h>
void storetable(int arr[][10],int r,int c,int number);
int main(){
    int table[2][10];
    storetable(table,0,10,2);
    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    storetable(table,1,10,3);
    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }

    return 0;
}
void storetable(int arr[][10],int r,int c,int number){
    for(int i=0;i<10;i++){
        arr[r][i]=number*(i+1);
    }

}