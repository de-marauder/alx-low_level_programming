#include "main.h"
#include <stdio.h>

/**
 * _sqrt - sqrt helper function with actual recursion
 * @base: integer. Number whose sq root is to be found
 * @n: integer. Possible sq root.
 * Return: sq root
 */


int _sqrt(int n, int base)
{

if (n < 1)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (base / n == n && base % n == 0)
{
return (n);
}

return (_sqrt(n - 1, base));
}



/**
 * _sqrt_recursion - calculate the sq root of an integer
 * @n: integer
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
int base = n;

return (_sqrt(n, base));
}
