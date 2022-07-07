#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_fizzbuzz - prints fizzbuzz
 * Return: void
 */

void print_fizzbuzz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}

/**
 * print_fizz - prints fizz
 * Return: void
 */

void print_fizz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}

/**
 * print_buzz - prints Buzz
 * Return: void
 */

void print_buzz(void)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}

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
print_fizzbuzz();
}
else if (i % 3 == 0)
{
print_fizz();
}
else if (i % 5 == 0)
{
print_buzz();
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
if (i != 100)
{
_putchar(' ');
}
}
_putchar('\n');
return (0);
}
