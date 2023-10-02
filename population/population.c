#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int m;
    do
    {
        m = get_int("Start Size: ");
    }
    while (m < 9);

    // TODO: Prompt for end size
    int n;
    do
    {
        n = get_int("End Size: ");
    }
    while (n < m);

    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    if (m < n)
    {
        do
        {
            m = m + (m / 3) - (m / 4);
            y++;
        }
        while (m < n);
    }
    else
    {
    }
    // TODO: Print number of years

    printf("Years: %i\n", y);
}
