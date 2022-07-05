#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: Character to be checked
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
char A = 'A';
char a = 'a';
char Z = 'Z';
char z = 'z';

if ((c > A - 1 && c < Z + 1) || (c > a - 1 && c < z + 1))
{
return (1);
}
return (0);
}
