#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * Returns: void
 */

print_alphabet(void)
{
  char c = 'a';
  int i;
  for (i = c; i < c + 25; i++)
    {
      _putchar(i);
    }
  _putchar('\n');

}
