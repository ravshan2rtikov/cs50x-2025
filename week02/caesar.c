#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// prototypes
char rotate(char c, int key);

// main function
int main(int argc, string argv[])
{
    // ensure user typed only 1 CLI argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    // ensure every character of argv[1] is a digit
    int len = strlen(argv[1]);
    for (int i = 0; argv[1][i] != '\0'; i < len, i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    int key =  atoi(argv[1]) % 26;

    // user input - plaintext
    string plaintext = get_string("plaintext: ");

    // for each character in plaintext
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    return 0;

        // rotate characters if it is a letter

    //print ciphertext
}

// functions
// character rotation
char rotate(char c, int key)
{
    if (isupper(c))
    {
        return ((c - 'A' + key) % 26) + 'A'; // Shift and wrap within A-Z
    }
    else if (islower(c))
    {
        return ((c - 'a' + key) % 26) + 'a'; // Shift and wrap within a-z
    }
    return c; // Non-alphabetic characters remain unchanged
}
