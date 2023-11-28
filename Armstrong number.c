#include<stdio.h>
#include<math.h>
int main(){
    int number,lastnum,sumarm=0,n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&number);
    printf("ENTER THE POWER:");
    scanf("%d",&n);
    int backup=number;
    while(number>0){
        lastnum=number%10;
        sumarm=sumarm+pow(lastnum,n);
        number=number/10;
    }
    if(sumarm==backup){

        printf("%d IS A ARMSTRONG NUMBER",backup);
    }else{

        printf("%d IS NOT A ARMSTRONG NUMBER",backup);
    }
    return 0;
}