#include<stdio.h>
int main() {
    int num, temp = 0;
    printf("ENTER THE NUMBER:");
    scanf("%d", &num);
    if(num==0 || num==1){
        printf("0 AND 1 IS NOT A PRIME NUMBER\n");

    }else{
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                temp++;
                break;
            }

        }
        (temp == 0) ? printf("%d IS PRIME NUMBER\n", num) : printf("%d IS A COMPOSITE NUMBER\n", num);
    }
    return 0;
}