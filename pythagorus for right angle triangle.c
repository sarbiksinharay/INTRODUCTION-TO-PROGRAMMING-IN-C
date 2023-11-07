#include<stdio.h>
#include<math.h>
int main() {
    float ac,ab,bc;
    printf("Enter the value of hypotenus,perpendicular,base:");
    scanf("%f,%f,%f",&ac,&ab,&bc);
     ac=sqrt(ab*ab+bc*bc);
    (ac>0)?
    printf("hypotenus:%f\n",ac) : printf("wrong input\n");
    float per=sqrt(ac*ac-bc-bc);
    (ab>0)? printf("Perpendicular:%f\n",per):
    printf("wrong input\n");
    float  base=sqrt(ac*ac-bc*bc);
    (bc>0)? printf("Base:%f\n",base):
     printf("Wrong input\n");

   
    

}