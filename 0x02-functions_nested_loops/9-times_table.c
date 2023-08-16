#include "main.h"

/**
*times_table - prints the 9 times table, starting with 0.
*Description: prints the 9 times table, starting with 0.
*Return: Returns 0
*/

void times_table(void)
{

int n, i, x;

for (n = 0; n <= 9; n++)
{
_putchar('0');

for (i = 1; i <= 9; i++)
{
_putchar(',');
_putchar(' ');

x = n * i;

if (x <= 9)
_putchar(' ');
else
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
