#include <stdlib.h>
/**
*array_range - creates an array of integers.
*@min: size
*@max: size
* Return: returns a pointer to the allocated memory.
*/

int *array_range(int min, int max)
{
int *ptr;
int size, i;

if (min > max)
{
return (NULL);
}
size = max - min + 1;

ptr = (int *)malloc(sizeof(int) * size);

if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}

return (ptr);
}
