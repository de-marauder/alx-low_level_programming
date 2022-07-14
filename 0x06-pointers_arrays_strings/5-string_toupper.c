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
 * string_toupper - converts lowercase charaters to uppercase
 * @str: string
 * Return: upper case string
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; i < _strlen(str); i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}

return (str);
}
