#include "main.h"
#include <string.h>

/**
*_strpbrk -  searches a string for any of a set of bytes
*@s: string to be scanned
*@accept:string containing the list of characters to match in s
* Return: pointer to byte in s if match is found,NULL if no byte found
*/
char *_strpbrk(char *s, char *accept)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (strchr(accept, s[i]) != NULL)
{
return (&s[i]);
}
}
return ('\0');
}
