#ifndef MAIN_H
#define MAIN_H

/**
 * print_most_numbers - print 0-9 without 2 and 4
 * Return: Nothing (void)
 */

void print_numbers(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * print_numbers - prints numbers from 0 - 9
 * Return: Nothing (void)
 */

void print_numbers(void);

/**
 * _isdigit - check if input is a digit
 * @i: character to check
 * Return: 1 if true, 0 if false
 */

int _isdigit(int i);


/**
 * mul - multiplies to numbers
 * @a: number
 * @b: number
 * Return: product of @a and @b
 */
int mul(int a, int b);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);


#endif
