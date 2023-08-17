#include "main.h"

/**
*more_numbers - prints 10 times the numbers, from 0 to 14
*Description: prints 10 times the numbers, from 0 to 14,
* Return:Returns 0
*/
void more_numbers(void)
{
int i, n;

for (i = 0; i <= 10; i++)
{
for (n = 0; n < 15; n++)
{
_putchar(n + '0');
}
}
_putchar('\n');
}
