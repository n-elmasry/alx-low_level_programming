#include "main.h"

/**
*print_square -  prints a square
*@size: s the size of the square
*Description:  prints a square
* Return:Returns 0
*/

void print_square(int size)
{
int i, x;


if (size <= 0)
{
_putchar('\n');
}
else

{
for (x = 0; x < size; x++)
{
for (i = 0; i < size; i++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
