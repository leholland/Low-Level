#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees 2 dimensional grid previously created
*@grid: Pointer to free
*@height: Rows / columns to free
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)

free(grid[i]);
free(grid);
}
