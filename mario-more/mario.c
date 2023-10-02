#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask for height input
    int y;
    do
    {
        y = get_int("Height: ");
    }
    while (y < 1);

    //print spaces increasing

    for (int x = 0; x < y; x++)
    {
        for (int p = 0; p < (y - x - 1); p++)
        {
            printf(".");
        }
        for (int p = 0; p < (x); p++)
        {
            printf("#");
        }
        printf("\n");
    }


    //print # decreasing

}