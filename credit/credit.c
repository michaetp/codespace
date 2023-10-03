#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit;
    do
    {
        credit = get_long("16-Digit Number: ");
    }
    while ((credit / 1000000000000000) < 1 || (credit / 1000000000000000) > 10);
    int sumdigit = everyotherdigit(credit);
    printf("%li\n", credit);
}

int everyotherdigit(long credit)
{
    int sum = 0;
    bool isAlternate = false;
    while (credit > 0)
    {
        if (isAlternate == true)
        {
            int lastdigit = credit % 10;
            sum = sum + (lastdigit * 2);
        }
        credit = credit / 10;
        isAlternate = !isAlternate;
    }
    return sum;
}
