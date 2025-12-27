#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int  i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j) <= number)
            {
                printf(" ");
            }else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int  i = number-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j) <= number)
            {
                printf(" ");
            }else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

//   *
//  ***
// *****
//  ***
//   *
