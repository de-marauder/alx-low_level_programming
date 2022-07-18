#ifndef MAIN_H
#define MAIN_H

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
