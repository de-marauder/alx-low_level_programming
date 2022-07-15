#include <stdio.h>
#include "main.h"

/**
 * rot13 - rotates alphabets 13 places to encode str
 * @str: string
 * Return: encoded string
 */

char *rot13(char *str)
{
char alpha_1[] = {'a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'i', 'j', 'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z',
'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L', 'M',
'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char alpha_2[] = {'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z',
'a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'i', 'j', 'k', 'l', 'm',
'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L', 'M'};

int i;
int str_len = 0;

while (str[str_len] != '\0')
{
for (i = 0; i < 52; i++)
{
if (((str[str_len] >= 'A' && str[str_len] <= 'Z') ||
(str[str_len] >= 'a' && str[str_len] <= 'z')) &&
(str[str_len] == alpha_1[i])
)
{
str[str_len] = alpha_2[i];
break;
}
}
str_len++;
}

return (str);
}
