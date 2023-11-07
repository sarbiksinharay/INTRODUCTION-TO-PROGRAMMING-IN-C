#include<stdio.h>
int main() {
    int age;
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);
    (age%2==0)? printf("YOUR AGE IDS EVEN"): printf("YOUR AGE IS ODD");
}