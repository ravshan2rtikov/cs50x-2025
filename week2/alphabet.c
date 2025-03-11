#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get user input
    string text = get_string("Input: ");
    // iterate through each element in the input string
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] < text[i - 1])
        {           
            printf("No\m");
            return 0;
        }
        printf("Yes\n");
    }
}