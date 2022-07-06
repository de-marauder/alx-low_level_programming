#include "main.h"

/**
 * times_table - print the 9 times table starting from zero
 * Return: Nothing
 */

void times_table(void)
{
int row_count;
int col_count;
int product;
for (row_count = 0; row_count < 10; row_count++)
{
for (col_count = 0; col_count < 10; col_count++)
{
product = row_count * col_count;
if (product > 9)
{
if (col_count != 0)
{
_putchar(',');
_putchar(' ');

_putchar(product / 10 + '0');
_putchar(product % 10 + '0');

}
}
else
{
if (col_count != 0)
{

_putchar(',');
_putchar(' ');
_putchar(' ');

_putchar(product + '0');
}
else
{
_putchar(product + '0');
}
}
}
_putchar('\n');
}
}
