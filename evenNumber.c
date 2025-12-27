#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    printf("**--------------**\n");

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}