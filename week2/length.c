#include <cs50.h>
#include <stdio.h>

int get_length (string s);
int main(void)
{
    string name = get_string("Name: ");
    int length = get_length(name);
    printf("%i\n", length);
}

int get_length (string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}