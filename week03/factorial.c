#include <cs50.h>
#include <stdio.h>

// prototypes
int f(int n);
// main function
int main(void)
{
    int number;
    do
    {
        number = get_int("Number: ");
    }
    while (number < 0);

    int result = f(number);
    printf("Factorial of %i is %i\n", number, result);
}

// functions
int f(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // recursive case
        return n * f(n - 1);
    }
}