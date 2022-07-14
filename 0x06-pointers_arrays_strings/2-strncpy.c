#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
int str_len = 0;
while (*(str + str_len))
{
str_len++;
}
return (str_len);
}

/**
 * _strncpy - copies a a string into another
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: max number of items to copy from @src into @dest
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;
int src_len = _strlen(src);
int dest_len = _strlen(dest);

if (src_len >= n)
{
src_len = n;
}

if (src_len > dest_len)
{
for (i = 0; i < dest_len; i++)
{
dest[i] = src[i];
}
}
else
{
for (i = 0; i < src_len; i++)
{
dest[i] = src[i];
}
}

if (dest_len > src_len)
{
for (j = i; j < n; j++)
{
dest[j] = '\0';
}
}

return (dest);
}
