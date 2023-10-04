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
    int slp1;
    int slp2;
    int total;
    while(Luhncredit >= 10)
    {
        lastno = Luhncredit % 10;
        s_lastno = (Luhncredit / 10) % 10;
        if((2 * s_lastno) > 9)
        {
            slp1 = s_lastno % 10;
            slp2 = s_lastno / 10;
            total = total + lastno + slp1 + slp2;
        }
        else
        {
            total = total + lastno + (2 * s_lastno);
        }
        Luhncredit = Luhncredit / 100;
    }
    while(Luhncredit < 10 && Luhncredit > 0)
    {
        lastno = Luhncredit % 10;
        total = total + lastno;
        Luhncredit = Luhncredit / 10;
    }
    printf("%i\n", total);
}