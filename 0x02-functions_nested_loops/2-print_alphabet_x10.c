#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 * Returns: void
 */

void print_alphabet_x10(void)
{
char c = 'a';
int i;
int counter;
for (counter = 0; counter < 10; counter++)
{
for (i = c; i <= c + 25; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
