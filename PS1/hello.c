#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string a;
    printf("Hello, World!\n");
    a = get_string("What's your name? ");
    printf("Hello %s! Nice to meet you.\n", a);
}