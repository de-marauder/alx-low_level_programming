#include "main.h"

/**
 * _strcpy - copy a string into another variable
 * @dest: destination variable
 * @src: string to be copied
 * Return: pointer to @dest
 */


char *_strcpy(char *dest, char *src)
{
int counter = 0;
int i;
  
while (src[counter] != '\0')
{
counter++;
}

for (i = 0; i <= counter; i++)
{
dest[i] = src[i];
}

return (dest);
}
