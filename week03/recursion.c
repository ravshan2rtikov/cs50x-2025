#include <cs50.h>
#include <stdio.h>
#include <string.h>

// prototypes
void draw(int n);

// main function
int main(void)
{
    int height = get_int("Number: ");
    draw(height);
}

// functions
void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}