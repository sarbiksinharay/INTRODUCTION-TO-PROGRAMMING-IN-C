#include<stdio.h>
int main(){
    FILE  *fptr;
    int x,y;
    fptr=fopen("ssr.txt","r");
  fscanf(fptr,"%d",&x);
   fscanf(fptr,"%d",&y);
   int sum=x+y;
    fclose(fptr);
     fptr=fopen("ssr.txt","w");
     fprintf(fptr,"%d",sum);
    return 0;
}