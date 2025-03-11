#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    // get user input
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    // coin denominations
    int coins = 0;
    int denom[] = {25, 10, 5, 1};
    // loop through the denominations
    for (int i = 0; i < 4; i++)
    {
        coins += cents / denom[i];
        cents %= denom[i];
    }
    // print the sum
    printf("%i\n", coins);
}