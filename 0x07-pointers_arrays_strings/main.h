#ifndef MAIN_H
#define MAIN_H


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
