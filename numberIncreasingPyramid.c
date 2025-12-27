#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}

// 1
// 12
// 123
// 1234
// 12345