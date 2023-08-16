#include "main.h"

/**
*jack_bauer - that prints every minute of the day of Jack Bauer
*Description: that prints every minute of the day of Jack Bauer
*Return: Returns 0
*/
void jack_bauer(void)
{
int h, m;

for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
