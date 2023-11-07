#include<stdio.h>
#include<math.h>
int main() {
    float perpendicular,base,hypotenus;
    printf("ENTER PERPENDICULAR AB:");
    scanf("%f",&perpendicular);
    printf("ENTER BASE BC:");
    scanf("%f",&base);
    printf("ENTER HYPOTENUS AC:");
    scanf("%f",&hypotenus);
    (hypotenus==sqrt(pow(perpendicular,2)+pow(base,2)))? printf("ITS A RIGHT ANGLE TRIANGE"): printf("ITS NOT A RIGHT ANGLE TRIANGE ");
    
    }