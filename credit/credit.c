#include <cs50.h>
#include <stdio.h>


int main(void)
{
    long credit;
    credit = get_long("16-Digit Number: ");

    int countno = 0;

    for (; credit > 0; credit = credit / 10)
    {
        countno++;
    }

    printf("%i\n", countno);
}

