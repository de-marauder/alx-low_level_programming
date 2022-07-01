#include <stdio.h>

/**
  *main - prints alphabets in reverse
  *Return: always zero
  *
  */

int main(void)
{
char al, num;
num = al = 'z';

while (num - 26 < al)
{
putchar(al);
al--;
}
putchar('\n');
return (0);
}
