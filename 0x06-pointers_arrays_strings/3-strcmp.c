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

while (s2[j] < s1[i])
{
i++;
j++;
return (*s1 - *s2);
}
while (s1[i] < s2[j])
{
i++;
j++;
return (*s1 - *s2);
}
return (0);
}
