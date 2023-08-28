#include "main.h"
#include <string.h>

/**
*_strstr -   locates a substring
*@haystack: string to be scanned
*@needle:  string to be searched with-in haystack string
* Return: pointer to the located substring,NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != '\0'; i++)
{
if (strchr(needle, haystack[i]) != NULL)
{
return (&haystack[i]);
}
}
return ('\0');
}
