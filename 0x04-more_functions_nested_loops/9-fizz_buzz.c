#include "main.h"

/**
 * main - print 1 - 100. Perform special operation for multiples of 3 and 5
 * Return: 0 always
 */

int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('b');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i > 9)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i + '0');
}
_putchar(' ');
}
_putchar('\n');
return (0);
}
