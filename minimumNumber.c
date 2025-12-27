#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    int temp;

    printf("Enter Number: ");
    scanf("%d", &num1);

    printf("Enter Number: ");
    scanf("%d", &num2);

    printf("Enter Number: ");
    scanf("%d", &num3);

    printf("Enter Number: ");
    scanf("%d", &num4);

    printf("Enter Number: ");
    scanf("%d", &num5);

    temp = num1;

    if (num2 < temp)
    {
        temp = num2;
    }
    if (num3 < temp)
    {
        temp = num3;
    }
    if (num4 < temp)
    {
        temp = num4;
    }
    if (num5 < temp)
    {
        temp = num5;
    }

    printf("**---------------------------------**\n");

    printf("Minimum Number is : %d",temp);

    return 0;
}