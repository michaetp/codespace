#include <cs50.h>
#include <stdio.h>

int isAMEX(int countno);

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

    if(countno == 15)

}

int isAMEX(int countno)
{
    int countno;
    if(countno == 15)
    {
        if((credit / (10^13)) == 34 || (credit / (10^13)) == 37)
        {
            printf("AMEX/n");
        }
    }
    
}