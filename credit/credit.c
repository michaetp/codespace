#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit;
    do
    {
        credit = get_long("16-Digit Number: ");
    }
    while (credit < 1 );

}

