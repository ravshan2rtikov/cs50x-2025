#include <cs50.h>
#include <stdio.h>

void meow(void);

int main(void)
{
  int i = 0;
  for (int i = 0; i < 3; i++)
  {
    meow();
  }
}

void meow(void)
{
  printf("meow\n");
}