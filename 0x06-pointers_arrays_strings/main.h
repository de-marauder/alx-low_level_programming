#ifndef MAIN_H
#define MAIN_H

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

#endif
