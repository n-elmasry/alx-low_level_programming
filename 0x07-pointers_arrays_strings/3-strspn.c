#include "main.h"
#include <string.h>

/**
*_strspn - gets the length of a prefix substring
*@s: string to be scanned
*@accept:string containing the list of characters to match in s
* Return:number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{

unsigned int i, n = 0;


for (i = 0; s[i] != '\0' && strchr(accept, s[i]) != NULL; i++)
{
n = n + 1;
}
return (n);

}
