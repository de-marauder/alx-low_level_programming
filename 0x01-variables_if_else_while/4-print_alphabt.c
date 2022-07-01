#include <stdio.h>

/**
  *main - Entry point
  *Return: Zero always
  */

int main(void)
{

char n, al;
n = al = 'a';

while (al < n + 26)
{
if (al != 101 && al != 113)
{
putchar(al);
}
 al++;
}
putchar('\n');

return (0);
}
