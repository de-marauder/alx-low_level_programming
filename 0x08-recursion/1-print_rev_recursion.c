#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
int n = 0;
if (s[n] == '\0')
{
return;
}
_print_rev_recursion(&(*(s + n + 1)));
_putchar(s[n]);
}
