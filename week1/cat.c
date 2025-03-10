#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
  int n;
  do
  {
    n = get_int("Number: ");
  }
  while (n <1);
  meow(n);
  
}

void meow(int n)
{
  int i = 0;
  for (int i = 0; i < n; i++)

  printf("meow\n");
}