#include<stdio.h>
int main() {
    int marks;
    printf("ENTER YOUR MARKS:");
    scanf("%d",&marks);
    if ( marks>=30 && marks<=100 ) {
        printf("CONGRATULATIOS !!\n");
        printf("YOU ARE PASSED !!\n");
    }
    else if (marks>=0 && marks<30) {
        printf("SORRY !!\n");
        printf("YOU ARE FAILED !!");
    }
    else {
       printf("YOU ENTERED WRONG MARKS");
    }
    }