#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // get user input
    if (argc != 2)
    {
        printf("Please provide a word.\n");
        return 1;
    }
    string text = argv[1];
    // iterate through each element in the input string
    for (int i = 0; i < strlen(text); i++)
    {
        if (!isalpha(text[i]))
        {
            printf("This is not a letter.\n");
            return 2;
        }
    }
    for (int i = 1, len = strlen(text); i < len; i++)
    {
        if (text[i] < text [i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    
}