#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask for height input
    int y;
    do
    {
        y = get_int("Height: ");
    }
    while (y < 1);

    //print first row of pyramid

    for (int x = 0; x < (y-1); y--)
    {
        printf(".");
    }
    for (int x = 0; x < y; y--)
    {
        printf("#");
    }
    //make algorithm for pyramid structure (growing base)
}