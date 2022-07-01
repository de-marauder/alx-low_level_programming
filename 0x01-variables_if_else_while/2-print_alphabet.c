#include <stdio.h>

/**
  *main - Entry point
  *Return: Zero always
  */

int main(void)
{

char n, al;
n = al = 'a';

while (n + 26 > al)
{
putchar(al);

al++;
}
putchar('\n');
return (0);
}
