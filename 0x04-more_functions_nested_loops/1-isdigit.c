#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
return (0);
}
