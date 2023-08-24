#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: destination string
*@src: source string
*Description: concatenates two strings
* Return: dest
*/
char *_strcat(char *dest, char *src)
{

int i, j;

while (dest[i])
{
_putchar(i);
i++;
}
_putchar('\0');

while (src[j])
{
_putchar(j);
j++;
}

return (dest);
}
