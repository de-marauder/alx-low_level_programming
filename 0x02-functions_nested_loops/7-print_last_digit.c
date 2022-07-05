#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to be used
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
_putchar((n % 10) + '0');
return (n % 10);
}
