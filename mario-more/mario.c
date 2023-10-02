#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask for height input
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);

    //print first row of pyramid

    for (int h = 0; h < h; h++)
    {
        printf(".");
    }
    //make algorithm for pyramid structure (growing base)
}