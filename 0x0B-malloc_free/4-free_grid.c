#include <stdlib.h>
#include <string.h>

/**
*free_grid -  frees a 2 dimensional grid
*@grid:  1
*@height:  2
*Return: Returns a pointer to the array, or NULL if it fails
*/
void free_grid(int **grid, int height)
{
int ig;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
