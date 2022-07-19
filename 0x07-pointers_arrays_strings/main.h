#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - prints a character to stdout
 * @c: character
 * Return: void
 */

void _putchar(char c);


/**
 * print_chessboard - prints a chessboard
 * @a: an array of pointers
 * Return: void
 */

void print_chessboard(char (*a)[8]);


/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return:  a pointer to the beginning of the substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle);


/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: list of characters to be searched for
 * Return: a pointer to the first match in  @s or NULL if no match
 */

char *_strpbrk(char *s, char *accept);


/**
 * _strspan - a functiona that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length of substring from @s that are in @accept
 */

unsigned int _strspn(char *s, char *accept);


/**
 * _strchr - a function to locate a character in a string
 * @s: a string
 * @c: charater to be located
 * Return: a pointer to the first occurence of @c
 */

char *_strchr(char *s, char c);


/**
 * _memcpy - copies a memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of memory spaces to copy
 * Return: @dest
 */

char *_memcpy(char  *dest, char *src, unsigned int n);



/**
 * _memset - convers the values of a given memory location to a constant
 * @s: buffer
 * @b: overwriting character
 * @n: number of spaces to im memory to overwrite
 * Return: edited buffer
 */

char *_memset(char *s, char b, int n);

#endif
