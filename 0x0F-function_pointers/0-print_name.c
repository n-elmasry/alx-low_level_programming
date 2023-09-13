#include "function_pointers.h"
#include <string.h>
/**
*print_name -  prints a name.
*@name: name to be printed
*@f: pointer to cunction
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
