#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("ENTER THE NUMBER:");
    scanf("%d",&number);
    int sqi=sqrt(number);
    float sqf=sqrt(number);
    if(sqi*sqi==number){
        printf("%d IS A COMPLETE SQUARE ROOT NUMBER\n",number);
        printf("SQUARE ROOT= %d",sqi);
    }else{
        printf("%d IS NOT A COMPLETE SQUARE ROOT NUMBER\n",number);
        printf("SQUARE ROOT= %f",sqf);
    }
    return 0;
}