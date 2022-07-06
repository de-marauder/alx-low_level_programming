#include <stdio.h>

/**
 * main - Print the sum of even fibonacci term less than 4,000,000
 * Return: zero always
 */

int main(void)
{
long a = 1;
long b = 2;
long sum = 2;
 
long c; /* Next number */


while (a + b < 4000000)
{
c = a + b;
if (c % 2 == 0)
{
sum += c;
}
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
