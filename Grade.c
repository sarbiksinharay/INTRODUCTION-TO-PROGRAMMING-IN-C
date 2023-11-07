#include<stdio.h>
int main() {
    int grade;
    printf("ENTER YOUR MARKS:");
    scanf("%d",&grade);
    (grade>=90)? printf("A++"):
    (grade>=80)? printf("A"):
    (grade>=70)? printf("B+"):
    (grade>=60)? printf("B"):
    (grade>=50)? printf("C"):
    (grade>=40)? printf("C") : printf("D \n Fail");
}