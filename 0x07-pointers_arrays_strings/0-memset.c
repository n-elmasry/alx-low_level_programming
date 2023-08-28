#include "main.h"

/**
*_memset -  fills memory with a constant byte
*@s: a pointer to the block of memory to fill
*@b: the value to be set.
*@n:his is the number of bytes to be set to the value.
*Description:  fills memory with a constant byte
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

{
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
return (s);
}
