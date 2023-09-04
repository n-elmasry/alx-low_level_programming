#include <stdlib.h>
#include "main.h"

/**
*_strdup -  returns a pointer to a newly allocated space in memory
*@str: chars in array
* Return: Returns a pointer to the array, or NULL if it fails
*/
char *_strdup(char *str)
{
unsigned int i;
char *ptr;
int n = sizeof(str);

if (str == NULL)
{
return (NULL);
}

ptr = malloc(sizeof(char) * n);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0 ; i < sizeof(str); i++)
{
ptr[i] = str[i];
}
return (ptr);
}
