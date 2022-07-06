#include <stdio.h>

/**
 * natural - calcute sum of all multiples of 3 and 5 under 1024
 * Return: Sum
 */

int natural(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d", sum);
return (sum);
}


/**
 * main - return result of natural
 * Return - result of natural function
 */

int main(void)
{
return (natural());
}
