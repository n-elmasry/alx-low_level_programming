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
int i = 0, j = 0;


if (s2[j] < s1[i])
{
return (*s1 - *s2);
}
else if (s1[i] < s2[j])
{
return (*s1 - *s2);
}
else
{
return (0);
}
}
