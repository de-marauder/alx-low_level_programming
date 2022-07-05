
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);


/**
 * print_alphabet - prints alphabets in lower case
 * Return: void always
 */

void print_alphabet(void);


/**
 * print_alphabet_x10 - prints the alphabets 10 times each on a new line
 * Return: void always
 */

void print_alphabet_x10(void);


/**
 * _islower - checks if a character is lower case
 * @c: The character to be checked
 * Return: 1 if true, 0 if false
 */

int _islower(int c);


/**
 * _isalpha - Checks if a character is an alphabet
 * @c: The character to be checked
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c);


/**
 * print_sign - prints '+' if positive, '-' if negative and '0' if zero
 * @n: The number to be checked
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n);


/**
 * _abs - Calutes the absolute value of a number
 * @n: The number to be used for calculation
 * Return: Absolute value of n
 */

int _abs(int n);


/**
 * print_last_digit - prints last digit of a number
 * @n: Number to be used
 * Return: Value of the last digit of @n
 */

int print_last_digit(int n);


/**
 * jack_bauer - prints the time from 00:00 to 23:59
 * Return: Nothing
 */

void jack_bauer(void);
