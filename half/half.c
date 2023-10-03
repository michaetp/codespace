// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float b, float t, int tip);

int main(void)
{
    float b = get_float("Bill before tax and tip: ");
    float t = get_float("Sale Tax Percent: ");
    int tip = get_int("Tip percent: ");

    printf("You will owe $%f each!\n", half(b, t, tip));
}

// TODO: Complete the function
float half(float b, float t, int tip)
{
    float half = (b + (t / 100) + (tip / 100)) / 2;
    return half;
}
