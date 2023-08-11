#include <stdio.h>
/**
*main - Entry point
*
*Description: printing lowercase and upper letters
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
