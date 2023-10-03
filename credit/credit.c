#include <cs50.h>
#include <stdio.h>

int everyotherdigit(long credit);

int main(void)
{
    long credit;
    credit = get_long("16-Digit Number: ");

    int countno = 0;
    while (credit > 0)
    {
        credit = (credit / 10);
        countno = countno + 1;
    }

    if(countno < 13)

}

