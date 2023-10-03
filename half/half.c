// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float b, float t, float tip);

int main(void)
{
    float b = get_float("Bill before tax and tip: ");
    float t = get_float("Sale Tax Percent: ");
    float tip = get_float("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(b, t, tip));
}

// TODO: Complete the function
float half(float b, float t, float tip)
{
    float half = (b + (1 + (t/100))) / 2;
    return half;
}
