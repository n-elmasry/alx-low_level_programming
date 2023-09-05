#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: string 1
*@height: string 2
*Return: Returns a pointer to the array, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

if (height <= 0 || width <= 0)
{
return (NULL);
}
ptr = (int **)malloc(sizeof(int *) * height);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(sizeof(int) * width);

if (ptr[i] == NULL)
{
for (j = 0; j < width; j++)
{
free(ptr[j]);
}
free(ptr);
return (NULL);
}
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;

}
}
return (ptr);
}
