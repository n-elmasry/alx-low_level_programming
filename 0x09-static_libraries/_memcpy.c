#include "main.h"

/**
*_memcpy -  copies memory area
*@dest: destination array where the content is to be copied
*@src: source of data to be copied
*@n:his is the number of bytes to be copied
*Description: copies memory area
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}
