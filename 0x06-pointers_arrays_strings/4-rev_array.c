#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of item in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int a_copy[1000];
int i;

for (i = 0; i < n; i++)
{
a_copy[n - 1 - i] = a[i];
}

for (i = 0; i < n; i++)
{
a[i] = a_copy[i];
}
}
