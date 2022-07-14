#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}
return (length);
}


/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -ve int if s1 < s2 or +ve int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int result = 0;
int i;
int s1_len = _strlen(s1);
int s2_len = _strlen(s2);

if (s1_len <= s2_len)
{
for (i = 0; i < s1_len; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
}
else
{
for (i = 0; i < s2_len; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}

return (result);
}
