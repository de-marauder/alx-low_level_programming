#include "main.h"

/**
 * print_line - print line across terminal
 * @n: number of times _ is printed
 * Return: void
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
