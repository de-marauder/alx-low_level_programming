#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to @c in @s or NUL if not found
 */

char *_strchr(char *s, char c)
{
int i;
char *ptr;
int s_len = 0;

while (s[s_len] != '\0')
{
s_len++;
}

for (i = 0; i < s_len; i++)
{
if (*(s + i) == c)
{
break;
}
}
ptr = &s[i];

if (i == s_len)
{
 ptr = '\0';
}

return (ptr);
}
