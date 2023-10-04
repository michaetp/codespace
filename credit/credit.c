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
    credit = get_long("Number: ");
    long originalcredit = credit;
    long Luhncredit = credit;

    int countno = 0;
    while (credit > 0)
    {
        credit = (credit / 10);
        countno = countno + 1;
    }

//Check if Luhn algorithm pass
    if(LUHN(Luhncredit) == false)
    {
        printf("INVALID\n");
    }
    else
    {
        //Check if AMEX
        if(countno == 15 && isAMEX(originalcredit))
        {
            printf("AMEX\n");
        }

        //Check if MasterCard or VISA
        else if(countno == 16 && isMC(originalcredit))
        {
            printf("MASTERCARD\n");
        }

        // Check if VISA
        else if((countno == 13 && isVISA13(originalcredit)) || (countno == 16 && isVISA16(originalcredit)))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
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
    long lastno;
    long s_lastno;
    long total=0;
    while(Luhncredit > 0)
    {
        lastno = Luhncredit % 10;
        s_lastno = (Luhncredit / 10) % 10;
        total = total + lastno + (2 * s_lastno);
        Luhncredit = Luhncredit / 100;
    }
    return((total % 10) == 0);
}