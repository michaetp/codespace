#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool isAMEX(long originalcredit);
bool isMC(long originalcredit);
bool isVISA13(long originalcredit);
bool isVISA16(long originalcredit);
bool LUHN(long Luhncredit);

int main(void)
{
    long credit;
    credit = get_long("Credit Number: ");
    long originalcredit = credit;
    long Luhncredit = credit;

    int countno = 0;
    while (credit > 0)
    {
        credit = (credit / 10);
        countno = countno + 1;
    }
    printf("%i\n", countno);

//Check if AMEX
    if(countno == 15 && isAMEX(originalcredit))
    {
        printf("AMEX\n");
    }

//Check if MasterCard or VISA
    if(countno == 16 && isMC(originalcredit))
    {
        printf("MASTERCARD\n");
    }

// Check if VISA
    if((countno == 13 && isVISA13(originalcredit)) || (countno == 16 && isVISA16(originalcredit)))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

}

bool isAMEX(long originalcredit)
{
    long first_two_digits = originalcredit / pow(10,13);
    return (first_two_digits == 34 || first_two_digits == 37);
}

bool isMC(long originalcredit)
{
    long first_two_digits = originalcredit / pow(10,14);
    return (first_two_digits >= 51 && first_two_digits <= 55);
}

bool isVISA13(long originalcredit)
{
    long first_digit = originalcredit / pow(10,12);
    return (first_digit == 4);
}

bool isVISA16(long originalcredit)
{
    long first_digit = originalcredit / pow(10,15);
    return (first_digit == 4);
}

bool LUHN(long Luhncredit)
{
    long second_to_last;
    Luhncredit = Luhncredit % 10
}