#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long credit;
    credit = get_long("Credit Number: ");
    long originalcredit;
    originalcredit = credit;

    int countno = 0;
    while (credit > 0)
    {
        credit = (credit / 10);
        countno = countno + 1;
    }
    printf("%i\n", countno);

    if(countno == 15)
    {
        if((originalcredit / pow(10,13)) == 34 || (originalcredit / pow(10,13)) == 37)
        {
            printf("AMEX/n");
        }
    }

}

