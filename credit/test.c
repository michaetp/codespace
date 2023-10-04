#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long credit;
    credit = get_long("Number: ");
    long originalcredit = credit;
    long Luhncredit = credit;
    int lastno;
    int s_lastno;
    int total = 0;
    while(Luhncredit >= 10)
    {
        lastno = Luhncredit % 10;
        s_lastno = (Luhncredit / 10) % 10;
        if((2 * s_lastno) > 9)
        {
            total += lastno + (s_lastno % 10) + (s_lastno / 10);
        }
        else
        {
            total += lastno + (2 * s_lastno);
        }
        Luhncredit /= 100;
    }
    while(Luhncredit < 10 && Luhncredit > 0)
    {
        lastno = Luhncredit % 10;
        total += lastno;
        Luhncredit /= 100;
    }
    printf("%i\n", total);
}