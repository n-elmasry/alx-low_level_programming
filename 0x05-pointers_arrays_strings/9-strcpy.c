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

int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);

}
