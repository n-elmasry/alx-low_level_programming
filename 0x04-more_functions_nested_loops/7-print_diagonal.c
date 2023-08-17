#include "main.h"

/**
*print_diagonal - draws a diagonal line
*@n: is the number of times the character \ should be printed
*Description: draws a diagonal line
* Return:Returns 0
*/
void print_diagonal(int n)
{

int i, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (y = 0; y < i; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
