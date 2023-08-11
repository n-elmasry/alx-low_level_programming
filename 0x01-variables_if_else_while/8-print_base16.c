#include <stdio.h>
/**
*main - Entry point
*
*Description: printing base 16
* Return: Always 0 (success)
*/
int main(void)
{
int n;
char x;

for (n = 0; n >= 9; n++)
{
putchar(n + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
