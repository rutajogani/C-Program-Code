#include <stdio.h>
int seats[6][4] = {0};
int seat, count = 0;

int windowSeat()
{
    int windowSeat = 1;
    for (int row = 0; row < 6; row++)
    {
        if (seats[row][0] == 0 || seats[row][0])
        {
            windowSeat = 0;
            break;
        }
        if (windowSeat)
        {
            printf("All window seats are full.\n");
        }
        else
        {
            printf("Window seats are available.\n");
        }
    }
}
int bookSeat()
{
    printf("**-----------------------------------**\n");
    printf("How Many seat do you want: ");
    scanf("%d", &seat);
    count = 0;

    for (int row = 0; row < 6; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (seats[row][column] == 0)
            {
                seats[row][column] = 1;
                count++;
            }
            if (count == seat)
            {
                printf("Your seat is Booked\n");
                printf("**-----------------------------------**\n");
                return 0;
            }
        }
    }
    if (count != seat)
    {
        printf("%d/%d tickets are booked!", count, seat);
        printf("**-----------------------------------**\n");
        return 0;
    }
}

int showBus()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", seats[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ticketBooking;

    for (int i = 0;; i++)
    {
        printf("**-----------------------------------**\n");
        printf("Do you want Book Ticket so Enter - 1\n");
        printf("Do you want Show Seat so Enter - 2\n");
        printf("Do you want Window Seat so Enter - 3\n");
        printf("Do you want Exit so Enter - 4\n");

        printf("**-----------------------------------**\n");
        printf("What do you want?\n");
        printf("**-----------------------------------**\n");

        scanf("%d", &ticketBooking);

        switch (ticketBooking)
        {
        case 1:
            bookSeat();
            break;
        case 2:
            showBus();
            break;
        case 3:
            windowSeat();
            break;
        case 4:
            return 0;
        default:
            printf("Not a Optional\n");
            break;
        }
    }
}