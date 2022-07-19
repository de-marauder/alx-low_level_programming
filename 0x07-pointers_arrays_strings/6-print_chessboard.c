#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array od pointers
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
  int len = 8;
  int i, j;
  
  for (i = 0; i < len; i++)
    {
      for (j = 0; j < len; j++)
	{
	  _putchar(a[i][j]);
	}
      _putchar('\n');
    }
}
