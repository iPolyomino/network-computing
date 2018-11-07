#include <stdio.h>

#define MAX_NUMBER 100

void factorization(int);
void print_numbers(int[]);

int main(void)
{
  int n;
  scanf("%d", &n);
  factorization(n);
  return 0;
}

void factorization(int n)
{
  int factor_index;
  int factor[MAX_NUMBER];

  for (factor_index = 0; factor_index < MAX_NUMBER; factor_index++)
  {
    factor[factor_index] = 0;
  }
  factor_index = 0;

  for (int i = 2; i * i < n + 1; i++)
  {
    while (n % i == 0)
    {
      factor[factor_index] = n;
      factor_index++;
      n /= i;
    }
  }
  if (n != 1)
  {
    factor[factor_index] = n;
    factor_index++;
  }
  print_numbers(factor);
}

void print_numbers(int numbers[])
{
  int i = 0;
  while (numbers[i] != 0 && i < MAX_NUMBER)
  {
    if (i != 0)
    {
      printf(", ");
    }
    printf("%d", numbers[i]);
    i++;
  }
  printf("\n");
}
