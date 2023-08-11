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
int c = 'a';
int x = tolower(c);

for (int c = 'a'; c <= 'z'; c++)
{
	putchar(x);
	return (0);
}
}
