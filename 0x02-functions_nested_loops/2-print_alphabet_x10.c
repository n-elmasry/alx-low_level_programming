#include "main.h"

/**
*print_alphabet_x10- print alphabet
*
*Description: printing alphabet in lowercase
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{

int c, i;

for (c = 'a'; c <= 'z'; c++)
{
for (i = 0; i < 10; i++)
_putchar(c);
}
_putchar ('\n');
}