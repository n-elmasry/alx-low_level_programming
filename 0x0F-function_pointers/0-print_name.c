#include "function_pointers.h"
#include <string.h>
/**
*print_name -  prints a name.
*@name: name to be printed
*@f: function to print name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
