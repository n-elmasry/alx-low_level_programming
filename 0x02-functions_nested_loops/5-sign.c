#include "main.h"

/**
*print_sign - prints the sign of a number
*
*Description: prints the sign of a number
*@n:number to be checked
*Return: Returns 1 if n > 1, 0 if n == 0, -1 if n < 0
*/

int print_sign(int n)
{
for (n > 0)
{
_putchar('+');
return (1);
}
for (n = 0)
{
_putchar ('0');
return (0);
}
for (n < 0)
{
_putchar ('-');
return (-1);
}
}
