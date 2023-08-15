#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*Description: prints the last digit of a number
*@i:number
*Return: Returns 0
*/
int print_last_digit(int i)
{
int n;

n = i % 10;

if (n < 0)
{
n = n * -1;
}

_putchar(n + '0');

return (n);
}
