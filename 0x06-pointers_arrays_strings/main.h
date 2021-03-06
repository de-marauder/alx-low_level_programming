#ifndef MAIN_H
#define MAIN_H


/**
 * infinite_add - adds two strings as though they were integers
 * @n1: first string
 * @n2: second stirng
 * @r: buffer. will be used to store the result
 * @size_r: integer
 * Return: string containing sum of @n1 and @n2
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_number - prints numbers to stdout
 * @n: number
 * Return: void
 */

void print_number(int n);


/**
 * rot13 - rotates the alphabets 13 places to encode string
 * @str: string
 * Return: encoded string
 */

char *rot13(char *str);


/**
 * leet - encodes a string in 1337 (LEET) format
 * @str: string
 * Return: encoded string
 */

char *leet(char *str);


/**
 * cap_string - capitalizes first leter of every word
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str);


/**
 * string_toupper - converts lower case characters to upper case characters
 * @str: string
 * Return: upper case string
 */

char *string_toupper(char *str);

/**
 * reverse_array - reverse the contents of an array
 * @a: an array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n);


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -ve int if s1 < s2 and +ve int if s2 < s1
 */

int _strcmp(char *s1, char *s2);

/**
 * _strncpy - a function that copies a string
 * @dest: array to be copied into
 * @src: array to be copied
 * @n: max numver of items to copy from @src into @dest
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);


/**
 * _strncat - appends a max of n items from one string to another
 * @dest: string to be appended to
 * @src: string to append
 * @n: max number of items from @src to append to @dest
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);


/**
 * _strcat - appends a string to another
 * @dest: string to be appended to
 * @src: string to append
 * Return: @dest + @src
 */

char *_strcat(char *dest, char *src);


/**
 * _putchar - outputs a single character to stdout
 * @c: character
 * Return: 1 on succes, -1 on error, and errno is set.
 */

int _putchar(char c);


#endif
