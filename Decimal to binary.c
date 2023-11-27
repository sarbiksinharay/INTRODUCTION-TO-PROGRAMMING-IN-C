#include<stdio.h>
int main(){
    int binary,decimal=0,i=1,remainder;
    printf("ENTER DECIMAL NUMBER:");
    scanf("%d",&decimal);
    while(decimal != 0){
        remainder=decimal%2;
        decimal=decimal/2;
        binary=binary+remainder*i;
        i=i*10;
    }
    printf("BINARY : %d",binary);
    return 0;
}