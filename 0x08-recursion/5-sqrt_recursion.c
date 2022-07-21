#include "main.h"


/**
 * _sqrt - sqrt helper function with actual recursion
 * @base: integer. Number whose sq root is to be found
 * @n: integer. Possible sq root.
 * Return: sq root
 */


int _sqrt(long n, long base)
{

if (n < 1)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n * n == base)
{
return (n);
}
/* If number is an approximate square return -1 */
if (n * n > base - 3 && n * n < base + 3)
{
return (-1);
}
/* Return n / 2 if n is greater than the sq root of base */
if (n * n > base)
{
return (_sqrt(n / 2, base));
}
/* Return n + 1 if n is less than sq root */
if (n * n < base)
{
return (_sqrt(n + 1, base));
}

return (_sqrt(n / 2, base));
}



/**
 * _sqrt_recursion - calculate the sq root of an integer
 * @n: integer
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
long no = n;
long base = n;

return (_sqrt(no, base));
}
