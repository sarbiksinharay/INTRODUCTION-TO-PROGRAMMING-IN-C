#include<stdio.h>
void slice(char arrs[],int n,int m);
int main(){
    char string[]="CIRCUMSTANCES";
    slice(string,3,5);
    return 0;
}
void slice(char arrs[],int n,int m){
    char nwstr[100];
    int  j=0;
    for(int i=n;i<=m;i++,j++){
         nwstr[j]=arrs[i];

    }
    nwstr[j]='\0';
    puts(nwstr);

}