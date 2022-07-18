#include "main.h"


/**
 * _memcpy - copies memory are
 * @dest: destination copy location
 * @src: source to copy from
 * @n: number of memory spaces to copy
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
