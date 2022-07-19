#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - add the diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int f_sum = 0;
int b_sum = 0;

for (i = 0; i < size; i++)
{
f_sum += a[i + (i * size)];
b_sum += a[(size - 1) + ((size - 1) * i )];
}

printf("%d, %d\n", f_sum, b_sum);
}
