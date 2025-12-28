#include <stdio.h>
#include <unistd.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        fork();
    }
    printf("1\n");
    return 0;
}

// how many time 1 print in output?