#include<stdio.h>
#include<math.h>
int main() {
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    int nwsr=sqrt(num);
    float nwsri=sqrt(num);
    (nwsr*nwsr==num)? printf("Its a complete squareroot\nsquareroot=%d",nwsr):
    printf("Its not a complete squareroot number\n squareroot=%f",nwsri);
    return 0;
}