#include "main.h"
#include <stdio.h>


/**
 * _str_len - calculates length of a string
 * @str: string
 * Return: string length
 */

int _str_len(char *str)
{
  int length = 0;
  while (str[length] != '\0')
    {
      length++;
    }

  return (length);
}


/**
 * _max_num - calcultes the max number between two
 * @n1: integer
 * @n2: integer
 * Return: max number between @n1 and @n2
 */

int _max_num(int n1, int n2)
{
  if (n1 >= n2)
    {
      return (n1);
    }
  return (n2);
}


/**
 * infinite_add - adds two strings as though they were integers
 * @n1: first string
 * @n2: second string
 * @r: buffer . will bee used to store result
 * @size_r: integer
 * Return: string containing sum of @n1 and @n2
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  char cpy_str = n2[1];
  char *cpy_ptr = &cpy_str;
  /*
  char *n1_copy = n1;
  char *n2_copy = n2;
  */
  int n1_len = _str_len(n1);
  int n2_len = _str_len(n2);

  int max_str_len = _max_num(n1_len, n2_len);
  /*  int overflow = 0;
   */
  int i;
  printf("max_str_len = %d\n", max_str_len);

  if (max_str_len == n2_len)
    {
      for (i = 0; i < n2_len - n1_len; i++)
	{
	  /*
	  cpy_ptr[i] = '0';
	  */	  
printf("1 *(cpy_ptr + i) = %d\n", *cpy_ptr);
	}
      for (i = 0; i < n2_len; i++)
	{
	  
	  *(cpy_ptr + i) = n1[i];
	  printf("2 *(cpy_ptr + %d) = %s\n", i, &(cpy_ptr[i]));
	  printf("2 *(cpy_str + %d) = %p\n", i, &(cpy_str));
	}
     
    }
  else
    {
      for (i = 0; i < n1_len - n2_len; i++)
	{
	  *(cpy_ptr + i) = '0';
	}
      for (i = n1_len - n2_len; i < n1_len; i++)
	{
	  *(cpy_ptr + i) = n2[i];
	}
    }

  printf("cpy_ptr = %s\n", cpy_ptr);
  printf("n1 = %s\n", n1);
  printf("n2 = %s\n", n2);
  printf("n1_len = %d\n", n1_len);
  printf("n2_len = %d\n", n2_len);
  printf("r = %x\n", *r);
  printf("size_r = %d\n", size_r);

  return (n1);
}
