#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit;
    do
    {
        credit = get_long("Number: ");
    }
    while ((credit / 1000000000000000) < 1 || (credit / 1000000000000000) > 10);
}

