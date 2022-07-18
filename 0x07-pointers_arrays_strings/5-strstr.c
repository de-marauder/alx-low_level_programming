#include "main.h"
#include <stdio.h>


/**
 * _strstr - locates a substring.
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: pointer to beginning of mmatched substring or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
int k = 0;
char *ptr;
int haystack_len = 0;
int needle_len = 0;

while (haystack[haystack_len] != '\0')
{
haystack_len++;
}

while (needle[needle_len] != '\0')
{
needle_len++;
}

for (i = 0; i < haystack_len; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; j < needle_len; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
k++;
}
if (k + 1 == needle_len)
{
ptr = &haystack[i];
return (ptr);
}
}
}

return ('\0');
}
