#include "main.h"

/**
*print_rev - prints a string, in reverse
*@s: string
*Description: prints a string, in reverse
* Return: s
*/

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

for (i -= 1; i >= 0; i--)
{
_putchar(s[c]);
}
_putchar('\n');

}
