#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: detination string
*@src: source string
*Description: concatenates two strings.
* Return: dest
*/
char *_strcat(char *dest, char *src)
{

int i, j;

while (dest[i])
{
i++;
}

for (j = 0; src[j] != 0; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
