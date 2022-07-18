#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string of valid characters
 * Return: a pointer to the first math in @s or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
int s_len = 0;
int accept_len = 0;
char *ptr;

while (s[s_len] != '\0')
{
s_len++;
}
while (accept[accept_len] != '\0')
{
accept_len++;
}

for (i = 0; i < s_len; i++)
{
for (j = 0; j < accept_len; j++)
{
if (s[i] == accept[j])
{
ptr = &s[i];
return (ptr);
}
}
}
ptr = &s[s_len];
return (ptr);
}
