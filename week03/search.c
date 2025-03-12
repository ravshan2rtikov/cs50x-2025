#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    int len = strlen(numbers[7]);
    for (int i = 0; i < len; i++)
    {
        if (numbers == n);
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}