#include <cs50.h>
#include <stdio.h>

// prototype
void draw(int n);

// main
int main(void)
{
    int height = get_int("Number: ");
    draw(height);
}

// functions

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}