#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: integer - length of string
 */

int _strlen(char *s);


/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: void
 */

void swap_int(int *a, int *b);


/**
 * reset_to_98 - Updates a parameter using a pointer
 * @n: pointer to a variable @n
 * return: void
 */

void reset_to_98(int *n);


#endif
