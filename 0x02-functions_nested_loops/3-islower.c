#include "main.h"

int _islower(int c)
{
char a = 'a';
char z = 'z';
if (c > a - 1 && c < z + 1)
{
return (1);
}
return (0);
}
