#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: string of valid characters
 * Return: length of substring from @s containg only chars from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int s_len = 0;
int accept_len = 0;
int len = 0;

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
if (len != i)
{
break;
}
for (j = 0; j < accept_len; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
}
return (len);
}
