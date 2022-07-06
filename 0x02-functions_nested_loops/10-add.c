#include "main.h"

/**
 * add - prints the sum of two numbers
 * @a: a number
 * @b: a number
 * Return: sum of @a and @b
 */

int add(int a, int b)
{
  int sum = a + b;
  int sum_copy = sum;
  int counter = 0;

  /* count digits in sum */
  while (sum_copy / 10 > 0)
    {
      sum_copy /= 10;
      counter += 1;
    }

  /* Print sum */
  int i;
  for (i = counter + 1; i > 0; i--)
    {
      _putchar((sum / (10 ** counter)) + '0');
    }
  _putchar(sum % 10 + '0');
  _putchar('\n');
  
  return (sum)
}
