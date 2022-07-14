#include "main.h"

/**
 * _strncat - appends a max of n items from one string to another string
 * @dest: string to be appended to.
 * @src: string to append
 * @n: max number of items from @src to append to @dest
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int src_len = 0;
int i = 0;

while (*(src + src_len) != '\0')
{
src_len++;
}

while (*(dest + dest_len) != '\0')
{
dest_len++;
}

if (src_len > n)
{
for (i = 0; i < n; i++)
{
*(dest + dest_len + i) = *(src + i);
}
}
else
{
for (i = 0; i < src_len; i++)
{
*(dest + dest_len + i) = *(src + i);
}
}
if (src_len < n)
{
*(dest + dest_len + src_len + 1) = '\0';
}
return (dest);
}
