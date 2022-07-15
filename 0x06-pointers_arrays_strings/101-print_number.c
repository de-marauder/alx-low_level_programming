#include "main.h"


/**
 * _expo - calculates the xponent of a number to another
 * @a: base number
 * @b: exponent
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
 * num_digits - counts number of digits in an integer
 * @n: integer
 * Return: number of digits
 */

int num_digits(int n)
{
int num = n;
int counter = 0;
while (num / 10 >= 1)
{
counter++;
num /= 10;
}

return (counter);
}


/**
 * print_number - prints numer to stdout using only _putchar
 * @n: number
 * Return: void
 */

void print_number(int n)
{
int i;
int n_digits = num_digits(n);

if (n < 0)
{
n *= -1;
n_digits = num_digits(n);
_putchar('-');
}
/* loop through number of digits and print digits */
for (i = n_digits; i > 0; i--)
{
_putchar((n / (_expo(10, i))) + '0');
n %= _expo(10, i);
}

_putchar((n % 10) + '0');

}
