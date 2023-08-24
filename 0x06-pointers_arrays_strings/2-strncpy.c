#include "main.h"

/**
*_strncpy - copies a string.
*@dest: destination string
*@src: string to be copied
*@n: number of characters to be copied from source
*Description: copies a string.
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;

}
return (dest);
}
