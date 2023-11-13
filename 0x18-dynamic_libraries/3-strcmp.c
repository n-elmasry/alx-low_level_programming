#include "main.h"

/**
*_strcmp -  compares two strings.
*@s1: first string
*@s2: second string
*Description: compares two strings.
* Return: 0
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++, s2++;
}
return (*s1 - *s2);
}
