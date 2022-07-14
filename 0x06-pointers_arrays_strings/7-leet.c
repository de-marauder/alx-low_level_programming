#include "main.h"

/**
 * leet - encodes string to 1337 (LEET) format
 * @str: string
 * Return: encoded string
 */

char *leet(char *str)
{
int i, j;
int str_len = 0;

char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (str[str_len] != '\0')
{
str_len++;
}

for (i = 0; i < str_len; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
}
}
}
return (str);
}
