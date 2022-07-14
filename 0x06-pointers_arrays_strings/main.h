#ifndef MAIN_H
#define MAIN_H

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

#endif
