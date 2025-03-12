#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boat", "top hat", "cat", "dog"};

    string s = get_string("Word: ");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], s) == 0);
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}