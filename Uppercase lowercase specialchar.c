#include<stdio.h>
int main() {
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    int val=(int)ch;
     (val>32 && val<64)?
        printf ("its a special character"):  (val>=65 && val<=91)?
    
        printf("its a Uppercase character"): printf("ita a Lowercase character");
    
}