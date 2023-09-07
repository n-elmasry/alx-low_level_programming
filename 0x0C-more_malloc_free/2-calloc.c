#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*_calloc -  allocates memory for an array, using malloc.
*@nmemb: int
*@size: size
* Return: returns a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
