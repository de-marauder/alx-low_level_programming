#include "main.h"

/**
 * print_diagonal - print diagonal line across terminal
 * @n: number of lines to span
 * Return: void
 */

void print_diagnal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
