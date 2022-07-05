#include "main.h"

/**
 * jack_bauer - print the time from 00:00 to 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
int h_tens;
int h_units;
int m_tens;
int m_units;

for (h_tens = 0; h_tens < 3; h_tens++)
{
for (h_units = 0; h_units <= 9; h_units++)
{
for (m_tens = 0; m_tens < 6; m_tens++)
{
for (m_units = 0; m_units <= 9; m_units++)
{
_putchar(h_tens + '0');
_putchar(h_units + '0');
_putchar(':');
_putchar(m_tens + '0');
_putchar(m_units + '0');

if (h_tens == 2 && h_units == 3 && m_tens == 5 && m_units == 9)
{
return;
}
}
}
}
}
}
