#include<stdio.h>
int check_char(char arrs[],char ch);
int main(){
  char str[]="SARBIK";
  char chh='V';
    check_char(str,chh);
    return 0;
}
int check_char(char arrs[],char ch){
    int temp=0;
    for(int i=0;arrs[i]!='\0';i++){
        if(arrs[i]==ch){
            printf("%c IS PRESENT",ch);
            temp=1;
            break;
        }
        }
    if(temp==0){
        printf("%c IS NOT PRESENT",ch);
    }

}