#include "main.h"

/**
*_puts -  prints a string
*@str: lenght
*Description:  prints a string
* Return: str
*/

void _puts(char *s)
{

for (; *s != '\0'; s++)
{
_putchar(*s);
}
_putchar('\n');
}
