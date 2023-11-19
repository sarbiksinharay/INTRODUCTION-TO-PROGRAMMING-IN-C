#include<stdio.h>
#include<string.h>
int main(){
    char name[5][20]={"string","AUDI","MITRANKA MATAL","ABCD","ADMS"};
    for(int i=0;i<5;i++){
        printf("%s ",name[i]);
    }
        return 0;
}
