#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*string_nconcat - concatenates two strings.
*@s1: string1
*@s2: string 2
*@n: size
* Return: Returns a pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len1, len2;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
{
n = len2;
}

ptr = (char *)malloc(len1 + len2 + 1);

if (ptr == NULL)
{
return (NULL);
}
strcpy(ptr, s1);
strncat(ptr, s2, n);
return (ptr);
}
