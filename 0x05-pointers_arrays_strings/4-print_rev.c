#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
int i;
int counter = 0;
while (*(str + counter) != '\0')
{
counter++;
}

for (i = counter - 1; i >= 0; i--)
{
_putchar(*(str + i));
}
_putchar('\n');
}
