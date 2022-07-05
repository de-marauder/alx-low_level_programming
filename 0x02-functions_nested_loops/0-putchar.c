#include "main.h"

/**
  * main - Prints "_putchar"
  * Return: always zero
  */

int main(void)
{
char putchar[9] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(putchar[i]);
}
_putchar('\n');

return (0);
}
