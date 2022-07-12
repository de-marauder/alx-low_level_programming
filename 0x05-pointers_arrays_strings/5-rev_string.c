#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string using pointers
 * @s: string
 * Return: void
 */


void rev_string(char *s)
{
int i;
int counter = 0;

char sc[1000];

while (*(s + counter) != '\0')
{
counter++;
}

for (i = 0; i < counter; i++)
{
sc[(counter - 1 - i)] = s[i];
}

for (i = 0; i < counter; i++)
{
s[i] = sc[i];
}
}
