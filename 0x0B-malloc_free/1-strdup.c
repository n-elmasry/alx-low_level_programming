#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_strdup -  returns a pointer to a newly allocated space in memory
*@str: chars in array
* Return: Returns a pointer to the array, or NULL if it fails
*/

char *_strdup(char *str)
{
unsigned int len;
unsigned int i;
char *ptr;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);
ptr = malloc(sizeof(char) * len + 1);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0 ; i < len; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
}
