#include "main.h"

/**
*_strcpy - copies the string pointed to by src
*@dest: to paste to
*@src: to copy from
*Description: copies the string pointed to by src
* Return:  the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{

int i = -1;

for (; src[i] != '\0'; i++)
{
dest[i] = src[i];

}
return (dest);

}
