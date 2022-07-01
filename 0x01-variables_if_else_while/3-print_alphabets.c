#include <stdio.h>

/**
  *main - Entry point
  *Return: Zero always
  */

int main(){

  char n, al, AL;
    n = al = 'a';
    AL = 'A';
while (al < n+26)
{
putchar(al);
al++;
}

    n = AL;
    while (AL < n + 26)
{
  putchar(AL);
  AL++;
 }
    putchar('\n');
 return (0);
}
