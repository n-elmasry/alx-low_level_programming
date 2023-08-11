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
char d;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
