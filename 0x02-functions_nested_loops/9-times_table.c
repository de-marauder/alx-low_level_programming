#include "main.h"

/**
 * times_table - print the 9 times table starting from zero
 * Return: Nothing
 */

void times_table(void)
{
int row_count;
int col_count;

for (row_count = 0; row_count < 10; row_count++)
{
for (col_count = 0; col_count < 10; col_count++)
{
_putchar(row_count * col_count);
if (col_count != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
