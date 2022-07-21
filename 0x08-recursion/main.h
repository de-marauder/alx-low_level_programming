#ifndef MAIN_H
#define MAIN_H


/**
 * _pow_recursion - a power function
 * @x: base integer
 * @y: exponent integer
 * Return: integer
 */

int _pow_recursion(int x, int y);


/**
 * factorial - calculate the factorial of an integer
 * @n: integer
 * Return: factorial of @n
 */

int factorial(int n);


/**
 * _strlen_recursion - calculate the length of  string
 * @s: string
 * Return: length of string @s
 */

int _strlen_recursion(char *s);


/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s);


/**
  * _puts_recursive - puts character on stdout using recursion
  * @s: string
  * Return: void
  */

void _puts_recursion(char *s);


/**
 * _putchar - output characterwise to stdout
 * @c: character
 * Return: void
 */

void _putchar(char c);

#endif
