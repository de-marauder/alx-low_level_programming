#include <stdio.h>

/**
 * main - Print the fibonacci sequence
 * Return: zero always
 */

int main(void)
{
long a = 1;
long b = 2;
long c; /* Next number */
int i; /* Loop variable */

printf("%ld, ", a);
printf("%ld, ", b);

for (i = 2; i < 50; i++)
{
c = a + b;

printf("%ld", c);
if (i != 49)
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
