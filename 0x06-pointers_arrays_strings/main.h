#ifndef MAIN_H
#define MAIN_H


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

#endif
