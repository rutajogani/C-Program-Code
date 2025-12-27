#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// 54321
// 4321
// 321
// 21
// 1