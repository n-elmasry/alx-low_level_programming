#include <stddef.h>
#include "main.h"

/**
*_strstr -   locates a substring
*@haystack: string to be scanned
*@needle:  string to be searched with-in haystack string
* Return: pointer to the beginning of the located substring, or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{

int i;
int x = 0;

while (needle[x] != '\0')
x++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != x)
haystack++;
else
return (haystack);
}
return (NULL);
}
