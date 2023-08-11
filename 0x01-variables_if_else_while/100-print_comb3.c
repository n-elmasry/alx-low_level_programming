#include <stdio.h>
/**
*main - Entry point
*
*Description: print 2 numbers
* Return: Always 0 (success)
*/

int main(void)
{
int i, n;

for (i = 0; i <= 99; i++)
{
for (n = i + 1; n <= 99; n++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((n / 10) + '0');
putchar((n % 10) + '0');

if (i < 98 || n < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
