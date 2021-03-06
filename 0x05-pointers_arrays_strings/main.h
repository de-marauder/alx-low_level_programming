#ifndef MAIN_H
#define MAIN_H



/**
 * _atoi - return first string of integers in a string as integers
 * @s: string
 * Return: integer in string or 0 if there are no integers
 */

int _atoi(char *s);


/**
 * _strcpy - copy a string to a different location
 * @dest: destination variable
 * @src: string to be copied
 * Return: string
 */

char *_strcpy(char *dest, char *src);


/**
 * print_array - print first n-terms of an array
 * @a: pointer to string
 * @n: number
 * Return: void
 */

void print_array(int *a, int n);


/**
 * puts_half - prints last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str);


/**
 * puts2 - prints items of a string with sn even index
 * @str: string
 * Return: void
 */

void puts2(char *str);


/**
 * rev_string - a function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s);


/**
 * _puts - prints a string to stdout
 * @str: string
 * Return: void
 */

void _puts(char *str);


/**
 * print_rev - prints a string to stdout in revers
 * @s: string
 * Return: void
 */

void print_rev(char *s);

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
