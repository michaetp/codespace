// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int upper_check = 0;
    int lower_check = 0;
    int digit_check = 0;
    int punct_check = 0;
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if (isupper(password[i]))
        {
            upper_check = 1;
        }
        else if (islower(password[i]))
        {
            lower_check = 1;
        }
        else if (isdigit(password[i]))
        {
            digit_check = 1;
        }
        else if (ispunct(password[i]))
        {
            punct_check = 1;
        }
    }
    if (upper_check == 1 && lower_check == 1 && digit_check == 1 && punct_check == 1)
    {
        return true;
    }
    return false;
}
