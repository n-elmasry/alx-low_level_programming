#include <stdio.h>
/**
*main - Entry point
*
*Description: printing numbers of base 10
* Return: Always 0 (success)
*/
int main(void)
{
unsigned char n;

for (n = 0; n <= 9; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
