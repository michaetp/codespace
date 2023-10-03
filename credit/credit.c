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

//Check if AMEX
    if(countno == 15)
    {
        long first_two_digits = originalcredit / pow(10,13);
        if(first_two_digits == 34 || first_two_digits == 37)
        {
            printf("AMEX\n");
        }
    }

//Check if MasterCard or VISA
    if(countno == 16)
    {
        long first_two_digits = originalcredit / pow(10,14);
        if(first_two_digits == 51 || first_two_digits == 52 || first_two_digits == 53 || first_two_digits == 54 || first_two_digits == 55)
        {
            printf("MASTERCARD\n");
        }

        long first_digit = 
        if(first_two_digits == 34 || first_two_digits == 37)
        {
            printf("VISA\n");
        }
    }
}

