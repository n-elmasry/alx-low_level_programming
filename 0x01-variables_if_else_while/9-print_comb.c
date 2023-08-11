#include <stdio.h>
/**
*main - Entry point
*
*Description: printing comb
* Return: Always 0 (success)
*/
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
putchar(',');
putchar (' ');
}

return (0);
}
