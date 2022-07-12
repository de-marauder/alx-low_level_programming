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
while (*(str + counter) != '\0')
{
counter++;
}

for (i = 0; i < counter; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
