#include "main.h"


/**
 * _expo - calculates the exponent of @a to @b
 * @a: a number
 * @b: a number
 * Return: exponent of @a to @b
 */

int _expo(int a, int b)
{
  int n, result = 1;

  for (n = 0; n < b; n++)
    {
      result *= a;
    }

  return (result);
}


/**
 * _put_num - print number to STDOUT character wise
 * @i: integer (number) to be printed
 * Return: Nothing
 */

void _put_num(int i)
{
  int i_copy = i;
  int count = 1;
  int j;

  if (i < 0)
    {
      i *= -1;
      i_copy = i;
      _putchar('-');
    }
  while (i_copy / 10 > 0)
    {
      i_copy /= i_copy / 10;
      count += 1;
    }

  for (j = 0; j < count; j++)
    {
      _putchar(i / _expo(10, j) + '0');
    }
}

	      

/**
 * print_to_98 - prints all natural numbers from @n to 98
 * @n: Integer, beginning of sequence
 * Return: Nothing
 */

void print_to_98(int n)
{
  int i;
  if (n > 98)
    {
      for (i = n; n >= 98; i--)
	{
	  _put_num(i);
	  if (i != 98)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	}
    }
  else
    {
      for (i = n; n <= 98; i++)
	{
	  _put_num(i);
	  if (i != 98)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	}      
    }
}
