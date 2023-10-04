#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long credit;
    credit = get_long("Number: ");
    long originalcredit = credit;
    long Luhncredit = credit;
    int total = 0;
    int position = 0;

    while (Luhncredit > 0)
    {
        int digit = Luhncredit % 10;
        if (position % 2 == 1)
        {
            int doubled = digit * 2;
            total += doubled % 10 + doubled / 10;
        }
        else
        {
            total += digit;
        }
        Luhncredit /= 10;
        position++;
    }

    if (total % 10 == 0)
    {
        printf("%i\n", total);
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}