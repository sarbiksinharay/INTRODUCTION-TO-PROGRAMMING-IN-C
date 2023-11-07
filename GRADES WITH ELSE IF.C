#include<stdio.h>
int main() {
    int marks;
    printf("ENTER YOUR MARKS:");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100) {
        printf("A++\n");
    } else if(marks>=80) {
        printf("A\n");
    }
    else if (marks>=70) {
        printf("B++\n");
    }
    else if(marks>=60) {
        printf("B\n");
    }
    else if(marks>=50) {
        printf("C+\n");
    }
    else if(marks>=40) {
        printf("C\n");
    }
    else if(marks>=0) {
        printf("D\nYOU ARE FAILED !!\n");
    }
   
    else {
        printf("YOU ENTERED WRONG MARKS !!\n");
    }
    printf("THANK YOU");
}