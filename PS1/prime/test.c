#include <stdio.h>

int main(void)
{
    int x, y;

    int result;

    x = 3;
    y = 3;
    // using modulo operator
    result = x % y;
    printf("%d", result);

    result = y % x;
    printf("\n%d", result);

    // for different values
    x = 13;
    y = 2;
    result = x % y;
    printf("\n%d", result);

    return 0;
}