#include "main.h"

/**
*print_triangle -  prints a triangle
*@size: s the size of the triangle
*Description:  prints a triangle
* Return:Returns 0
*/
void print_triangle(int size)
{
int i, n, z;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (n = size - i; n > 1; n--)
{
_putchar(32);
}

for (z = 0; z <= i; z++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
