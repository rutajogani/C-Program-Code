#include<stdio.h>
int main()
{   
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = number-1; i >= 1; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}

// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
