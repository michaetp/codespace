#include <cs50.h>
#include <stdio.h>

int everyotherdigit(long credit);

int main(void)
{
    long credit;
    do
    {
        credit = get_long("16-Digit Number: ");
    }
    while (credit < 1 );

}

int everyotherdigit(long credit)
{
    int sumalt = 0;
    bool isAlternate = false;
    while (credit > 0)
    {
        if (isAlternate == true)
        {
            int lastdigit = credit % 10;
            sumalt = sumalt + (lastdigit * 2);
        }
        credit = credit / 10;
        isAlternate = !isAlternate;
    }
    return sum;
}
