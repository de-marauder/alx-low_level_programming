#include <stdio.h>

/**
  *main - Prints comma separated decimal digits
  *Return: always zero (success)
  */

int main(void)
{

char num;
num = 0;
while (num < 10)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
