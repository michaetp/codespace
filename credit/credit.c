#include <cs50.h>
#include <stdio.h>

int everyotherdigit(long credit);

int main(void)
{
    long credit;
    credit = get_long("16-Digit Number: ");

    for (int countno = 1; (credit/10) > 0; countno++)
    {
    credit = (credit / 10);
    countno = countno + 1;
    }
    printf("%i\n", countno);
}

