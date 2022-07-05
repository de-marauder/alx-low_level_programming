#include "main.h"

/**
 *_islower - Checks if a character is lowercase
 * @c: Character to check
 *Return: 1 if true, 0 if false
 */

int _islower(int c)
{
char a = 'a';
char z = 'z';
if (c > a - 1 && c < z + 1)
{
return (1);
}
return (0);
}
