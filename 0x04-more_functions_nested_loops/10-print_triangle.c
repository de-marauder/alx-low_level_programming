#include "main.h"

/**
 * print_triangles - prints triangles
 * @size: size of triangle
 * Return: void
 */

void print_triangles(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
/* for spaces */
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
/* for # */
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
