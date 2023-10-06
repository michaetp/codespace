#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


string replaceVowels(const string word);
char *my_strdup(const char *str);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string input = argv[1];
        string replaced = replaceVowels(input);

        if (strcmp(input, replaced) == 0)
        {
            printf("No vowels found in the word.\n");
        }
        else
        {
            printf("Original: %s\n", input);
            printf("Modified: %s\n", replaced);
        }
    }
    else
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }
}

string replaceVowels(const string word)
{

    string result = strdup(word); // Create a copy of the input string

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        switch (word[i])
        {
            case 'a':
            case 'A':
                result[i] = '6';
                break;
            case 'e':
            case 'E':
                result[i] = '3';
                break;
            case 'i':
            case 'I':
                result[i] = '1';
                break;
            case 'o':
            case 'O':
                result[i] = '0';
                break;
        }
    }

    return result;
}

char *my_strdup(const char *str)
{
    size_t len = strlen(str) + 1;
    char *copy = malloc(len);
    if (copy != NULL) {
        strcpy(copy, str);
    }
    return copy;
}
