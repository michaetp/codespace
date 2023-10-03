#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num;
    do
    {
        num = get_long("Number: ");
    }
    while (longlen(num) < 16);
}