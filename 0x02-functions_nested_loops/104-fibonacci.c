#include <stdio.h>

/**
 * main - Print the first 98 terms of fibonacci sequence
 * Return: zero always
 */

int main(void)
{
long a = 1;
long b = 1;
unsigned long c; /* Next number */
int i; /* Loop variable */
long overflow, a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

printf("%ld, ", a);

for (i = 1; i < 92; i++)
{
c = a + b;

printf("%lu, ", c);

a = b;
b = c;
}

/* for longer numbers */

a_head = a / 1000000000; /* break larger num into 2 parts */
a_tail = a % 1000000000;
b_head = b / 1000000000;
b_tail = b % 1000000000;

for (; i < 99; i++)
{
overflow = (a_tail + b_tail) / 1000000000;
sum_tail = (a_tail + b_tail) -(1000000000 * overflow);
sum_head = (a_head + b_head) +overflow;

printf("%lu%lu", sum_head, sum_tail);
if (i != 98)
{
putchar(',');
putchar(' ');
}

a_head = b_head;
a_tail = b_tail;
b_head = sum_head;
b_tail = sum_tail;
}

printf("\n");
return (0);
}
