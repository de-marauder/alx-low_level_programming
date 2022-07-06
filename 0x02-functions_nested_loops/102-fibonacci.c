#include <stdio.h>

/**
 * main - Print the fibonacci sequence
 * Return: zero always
 */

int main(void)
{
int a = 1;
int b = 2;
unsigned long c; /* Next number */
int i; /* Loop variable */

printf("%d, ", a);
printf("%d, ", b);

for (i = 2; i < 50; i++)
{
c = a + b;

printf("%lu, ", c);

a = b;
b = c;
}
printf("\n");
return (0);
}
