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
unsigned int len = strlen(str);
unsigned int i;
char *ptr;

if (str == NULL)
{
return (NULL);
}

ptr = malloc(sizeof(char) * len);

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
