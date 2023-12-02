#include<stdio.h>
#include<string.h>
void vowel_count(char arrs[]);
int main(){
    char string[]="AEIOUkl";
    vowel_count(string);
    return 0;
}
void vowel_count(char arrs[]){
    int count_v=0;
    for(int i=0;arrs[i]!='\0';i++){
        if(arrs[i]=='a' || arrs[i]=='e' || arrs[i]=='i' || arrs[i]=='o'|| arrs[i]=='u'|| arrs[i]=='A'|| arrs[i]=='E'|| arrs[i]=='I'|| arrs[i]=='O' || arrs[i]=='U'){
            count_v++;
        }
    }
    printf("VOWELS:%d",count_v);

}