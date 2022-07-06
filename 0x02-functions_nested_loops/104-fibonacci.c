#include <stdio.h>

/**
 * main - Print the first 98 terms of fibonacci sequence
 * Return: zero always
 */

int main(void)
{
long a = 1;
long b = 2;
unsigned long c; /* Next number */
int i; /* Loop variable */

printf("%ld, ", a);
printf("%ld, ", b);

for (i = 2; i < 98; i++)
{
c = a + b;

printf("%lud", c);
if (i != 97)
{
putchar(',');
putchar(' ');
}

a = b;
b = c;
}
printf("\n");
return (0);
}
