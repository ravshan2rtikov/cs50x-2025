#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // take user input
    int ht;
    do
    {
        ht = get_int("Height: ");
    }
    while (ht < 1);

    // print pyramid using input
    for (int i = 0; i < ht; i++)
    {
        print_row(ht - i - 1, i + 1);
    }

}

void print_row(int spaces, int bricks)
{
    // print the spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // print the bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}
