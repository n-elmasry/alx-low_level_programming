#include "main.h"

/**
*_puts -  prints a string
*@str: lenght
*Description:  prints a string
* Return: str
*/

void _puts(char *str)
{

if (*str != '\0')
{
_putchar(*str);
}
_putchar('\n');
}
