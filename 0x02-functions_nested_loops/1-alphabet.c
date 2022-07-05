#include "main.h"

/**
 *main - prints the alphabets in lowercase
 *Returns: zero always
 */

int main(void)
{
  char c = 'a';
  int i;
  for (i = c; i < c + 25; i++)
    {
      _putchar(i);
    }
  _putchar('\n');

  return (0);
}
