
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
