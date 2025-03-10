#include <cs50.h>
#include <stdio.h>


void print_row(int bricks);
int main(void)
{

// take input from the user
    int height = get_int("What is the height of the pyramid?: ");

// write the pyramid code
print_row(height);
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#"); 
    }
    printf("\n");
}

