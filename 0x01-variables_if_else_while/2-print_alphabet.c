#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Description: printing lowercase letters
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c)
}
putchar('\n');
return (0);
}
