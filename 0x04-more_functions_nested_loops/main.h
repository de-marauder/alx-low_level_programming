#ifndef MAIN_H
#define MAIN_H

/**
 * print_triangle - prints triangles
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size);

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */

void print_square(int size);


/**
 * print_diagonal - draw a diagonal line on the termanal
 * @n: number of lines to span of terminal
 * Return: void
 */

void print_diagonal(int n);


/**
 * print_line - print a line across the terminal
 * @n: number of times _ is printed
 * Return: void
 */

void print_line(int n);


/**
 * more_numbers - prints 1-14 10 times
 * Return: void
 */

void more_numbers(void);


/**
 * print_most_numbers - print 0-9 without 2 and 4
 * Return: Nothing (void)
 */

void print_most_numbers(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * print_numbers - prints number
 * @n: number to print
 * Return: Nothing (void)
 */

void print_number(int n);



/**
 * print_numbers - prints numbers from 0 - 9
 * Return: Nothing (void)
 */

void print_numbers(void);

/**
 * _isdigit - check if input is a digit
 * @c: character to check
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);


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
