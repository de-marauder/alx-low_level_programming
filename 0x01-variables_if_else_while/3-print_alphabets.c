#include <stdio.h>

/**
  *main - prints a-z then A-Z on the same line
  *Return: Zero always
  */

int main(void)
{

char n, al, AL;
n = al = 'a';
AL = 'A';
while (n + 26 > al)
{
putchar(al);
al++;
}

n = AL;
while (n + 26 > AL)
{
putchar(AL);
AL++;
}
putchar('\n');
return (0);
}
