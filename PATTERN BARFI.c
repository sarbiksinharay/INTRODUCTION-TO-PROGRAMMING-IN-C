#include <stdio.h>
int main()
{
    int row;

    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row-i; j++)
            printf(" ");

        for (int k = 1; k <= 2*i-1; k++)
            printf("*");

        printf("\n");
    }

    for (int i = 1; i <= row - 1; i++)
    {
        for (int j = 1; j <= i; j++)
            printf(" ");

        for (int k = 1 ; k <= 2*(row-i)-1; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}