#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{

  int a, b, c, d;

  a = largest_number(10, 10, 6);
  b = largest_number(10, 10, 10);
  c = largest_number(20, 10, 20);
  d = largest_number(0, 10, 6);
 
  printf("10 yes %d is the largest number\n", a);
  printf("10 yes %d is the largest number\n", b);
  printf("20 yes %d is the largest number\n", c);
  printf("10 yes %d is the largest number\n", d);
  

  return (0);
}
