#include "main.h"

/**
 * _strcat - appends one string to another string
 * @dest: string to be appended to.
 * @src: string to append
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;
int i;

while (*(src + src_len) != '\0')
{
src_len++;
}

while (*(dest + dest_len) != '\0')
{
dest_len++;
}

for (i = 0; i < src_len; i++)
{
*(dest + dest_len + i) = *(src + i);
}
*(dest + dest_len + src_len + 1) = '\0';

return (dest);
}
