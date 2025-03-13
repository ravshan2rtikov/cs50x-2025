#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"David", "John", "July"};
    string numbers[] = {"617-495-0022", "949-465-2299", "255-878-0102"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found! %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found!");
    return 1;
}