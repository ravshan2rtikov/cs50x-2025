#include <cs50.h>
#include <stdio.h>

// prototypes
void print_row(int bricks);
// main
int main(void)
{

// take input from the user + cascade the edge case with do loop
    int height;
    do
    {
        height = get_int("What is the height of the pyramid?: ");
    } 
    while (height < 1);
    

// write the pyramid code
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

// functions
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#"); 
    }
    printf("\n");
}

