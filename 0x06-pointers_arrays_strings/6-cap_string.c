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
 * cap_string - capitalize first letter of every word in a string
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
int i;

for (i = 0; i < _strlen(str); i++)
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
}

return (str);
}
