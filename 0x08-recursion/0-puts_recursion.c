#include "main.h"

/**
 * _puts_recursion - put string on stdout with recursion
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
int n = 0;
if (s[n] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[n]);
_puts_recursion(&s[n + 1]);
}
