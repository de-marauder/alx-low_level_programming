#include "main.h"

/**
 * _expo - calculates the exponent of @a to @b
 * @a: a number
 * @b: a number
 * Return: exponent of @a to @b
 */

int _expo(int a, int b)
{
  int result = 1;
  int i;
  for (i = 0; i < b; i++)
    {
      result *= a;
    }
  
  return (result);
}


/**
 * add - prints the sum of two numbers
 * @a: a number
 * @b: a number
 * Return: sum of @a and @b
 */

int add(int a, int b)
{
  int sum = a + b;
  
  return (sum);
}
