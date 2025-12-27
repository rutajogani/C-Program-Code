#include <stdio.h>
int main()
{
    int number_1, number_2;
    char opt;

    printf("Enter a number_1 : ");
    scanf("%d", &number_1);

    printf("Enter a opt : ");
    scanf(" %c", &opt);

    printf("Enter a number_2 : ");
    scanf("%d", &number_2);

    if (opt == '+')
    {
        printf("ans is: %d\n", number_1 + number_2);
    }
    else if (opt == '-')
    {
        printf("ans is: %d\n", number_1 - number_2);
    }
    else if (opt == '*')
    {
        printf("ans is: %d\n", number_1 * number_2);
    }
    else if (opt == '/')
    {
        printf("ans is: %d\n", number_1 / number_2);
    }

    return 0;
}