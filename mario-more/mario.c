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

    for (int x = 0; x < y; x++)
    {
        for (int p = 0; p < (y-1); p++)
        {
            printf(".");
        }
        printf("\n");
    }


    //make algorithm for pyramid structure (growing base)
}