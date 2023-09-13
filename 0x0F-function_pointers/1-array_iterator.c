#include "function_pointers.h"

/**
*array_iterator - executes a function as parameter on each element of array
*@array: name to be printed
*@size: size of array
*@action: function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if ( array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
