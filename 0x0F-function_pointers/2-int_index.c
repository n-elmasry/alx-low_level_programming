#include "function_pointers.h"

/**
*int_index - searches for an integer.
*@array: name to be printed
*@size: size of array
*@cmp: pointer to function
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
