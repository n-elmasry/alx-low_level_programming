#include <stdlib.h>
#include "main.h"

/**
*create_array - creates an array of chars,initializes it with a specific char
*@c: chars in array
*@size: size of array
* Return: Returns a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0 ; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
