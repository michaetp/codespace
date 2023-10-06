// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string replaced = replace(argv[1]);
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }
}

string replace(string word)
{
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            if (word[i] == 'a' || word[i] == 'A')
            {
                word[i] = '6';
            }
            else if (word[i] == 'e' || word[i] == 'E')
            {
                word[i] = '3';
            }
            else if (word[i] == 'i' || word[i] == 'I')
            {
                word[i] = '1';
            }
            else if (word[i] == 'o' || word[i] == 'O')
            {
                word[i] = '0';
            }
        }
    }
    return word;
}
