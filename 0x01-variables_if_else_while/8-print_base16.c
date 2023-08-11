#include <stdio.h>
/**
*main - Entry point
*
*Description: printing base 16
* Return: Always 0 (success)
*/
int main(void)
{
int x;
char c;

for (x = 0; x < 10; x++)
putchar((x % 10) + '0');

for (c = 'a'; c <= 'f'; c++)
putchar(c);

putchar('\n');

return (0);
}
