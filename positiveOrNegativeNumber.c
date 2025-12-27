#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("**-----------------------------**\n");

    if (number == 0)
    {
        printf("This is Zero");
    }
    else if (number > 0)
    {
        printf("This is Positive Number");
    }
    else if (number < 0)
    {
        printf("This is Negative Number");
    }

    return 0;
}