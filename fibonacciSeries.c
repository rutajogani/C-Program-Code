#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("**-------------------------**\n");

    int first, second, temp;
    first = 0;
    second = 1;

    printf("0,");
    printf("1,");

    for (int i = 0; i <= number; i++)
    {
        temp = first + second;
        first = second;
        second = temp;

        printf("%d,", temp);
    }

    return 0;
}