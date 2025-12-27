#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

//     1 
//    2 2 
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 