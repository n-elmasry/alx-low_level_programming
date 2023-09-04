#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: Returns a pointer to the array, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int i, j, len1, len2;

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
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';
return (ptr);
}
