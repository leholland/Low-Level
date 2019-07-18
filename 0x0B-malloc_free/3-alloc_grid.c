#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Returns pointer to 2d array of integers
*@width: Width of grid
*@height: Height of grid
* Return: Return grid of 0s, or NULL
*/

int **alloc_grid(int width, int height)
{
int row, column, k;
int **grid;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

for (row = 0; row < height; row++)
{
grid[row] = malloc(width * sizeof(int));

if (grid[row] == NULL)
{
for (k = 0 ; k <= row ; k++)
{
free(grid[k]);
}
free(grid);
}
for (column  = 0 ; column < width ; column++)
{
grid[row][column] = 0;
}
}
return (grid);
}
