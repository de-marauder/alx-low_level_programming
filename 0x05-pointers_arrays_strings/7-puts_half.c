#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int counter = 0;
int i, mid_index;


while (str[counter] != '\0')
{

counter++;
}

if (counter % 2 != 0)
{
mid_index = (counter - 1) / 2;
}
else
{
mid_index = counter / 2;
}

for (i = mid_index; i < counter; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
