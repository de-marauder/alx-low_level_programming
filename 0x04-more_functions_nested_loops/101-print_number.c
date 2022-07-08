#include "main.h"
#include <stdio.h>

/**
 * _expo - calculate exponent
 * @a: base
 * @b: exponent
 * Return: exponent of @a to @b
 */

int _expo(int a, int b)
{
int i;
int result = 1;
for (i = 0; i < b; i++)
{
result *= a;
}
return (result);
}


/**
 * print_number - print an integer character wise
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
int counter = 0;
int num_1, num_2;
int i;

if (n < 0)
{
n *= -1;
_putchar('-');
}
num_1 = num_2 = n;

/* Count number of digits in number */
while (num_1 / 10 > 0)
{
num_1 /= 10;
counter++;
}

/* print the Number */

for (i = counter; i > 0; i--)
{
_putchar((num_2 / _expo(10, i)) + '0');
num_2 %= _expo(10, i);
}

_putchar((n % 10) + '0');

}
