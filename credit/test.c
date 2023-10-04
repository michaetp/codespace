#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long c = get_long("Number: ");
    int m = (c/10) % 10;

    printf("%i\n", m);
}