#include "main.h"

/**
 * _memset - fills a specified memory location with a constant byte
 * @s: buffer
 * @b: overwriting character
 * @n: number of memory spaces to be overwitten
 * Return: edited buffer
 */

char *_memset(char *s, char b, int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
