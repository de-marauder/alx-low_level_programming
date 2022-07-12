#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
int i;
int counter = 0;
while (*(s + counter) != '\0')
{
counter++;
}

for (i = 0; i < counter; i++)
{
_putchar(*(s + i));
}
_putchar('\n');
}
