#include <stdio.h>
/**
*main - Entry point
*
*Description: printing base 16
* Return: Always 0 (success)
*/
int main(void)
{
char n;
char x;

for (n = 0; n >= 9; n++)
{
putchar(n);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
