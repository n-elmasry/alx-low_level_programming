#include "main.h"

/**
*_puts -  prints a string
*@str: lenght
*Description:  prints a string
* Return: str
*/

void _puts(char *str)
{

for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
