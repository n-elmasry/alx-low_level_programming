#include "main.h"

/**
*print_triangle -  prints a triangle
*@size: s the size of the triangle
*Description:  prints a triangle
* Return:Returns 0
*/
void print_triangle(int size)
{
int i;

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{

_putchar(35);
}

}
_putchar('\n');
}
