#include<stdio.h>
int main(){
    struct user_data{
        char name[20];
        int age;
        long int ph;
    };
    struct user_data sq[5];
    for(int i=0;i<5;i++){
        printf("ENTER THE NAME OF PERSON-%d:\n",i+1);
        gets( sq[i].name);
//        scanf("%s",&sq[i].name);
        printf("ENTER THE AGE OF PERSON-%d: \n",i+1);
        scanf("%d",&sq[i].age);
        printf("ENTER THE PHONE NUMBER OF PERSON-%d: \n",i+1);
        scanf("%ld",&sq[i].ph);
        getchar();
    }
    for(int i=0;i<5;i++){
        printf("%d-PERSON'S NAME: %s\n",i+1,sq[i].name);

//        puts(sq[i].name);
       printf("%d-PERSON'S AGE: %d\n",i+1,sq[i].age);
       printf("%d-PERSON'S PHONE NUMBER: %ld\n",i+1,sq[i].ph);
    }
    return 0;
}