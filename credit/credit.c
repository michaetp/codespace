#include <cs50.h>
#include <stdio.h>


int main(void)
{
    long credit;
    credit = get_long("16-Digit Number: ");

    for (int countno = 0; (credit/10) > 0; countno++)
    //int countno = 1;
    //while ((credit/10) > 0)
    {
    credit = (credit / 10);
    }
    printf("%i\n", countno);
}

