#include "main.h"

/**
*print_rev - prints a string, in reverse
*@s:string printed
*Description:  prints a string, in reverse
* Return: s
*/

void print_rev(char *s)
{

for (; *s = '\0'; s--)
{
_putchar(*s);
}
_putchar('\n');
}
