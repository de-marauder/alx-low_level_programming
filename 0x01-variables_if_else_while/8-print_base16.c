#include <stdio.h>

/**
  *main - Pirnt hex digits
  *Return: always zero (success)
  */

int main(void)
{

char a, al, num;
num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
a = al = 'a';
while (a + 6 > al)
{
putchar(al);
al++;
}
 putchar('\n');
return (0);
}
