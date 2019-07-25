#include "function_pointers.h"

/**
* int_index - Searches for integer
* @array: Array of numbers
* @size: Number of elems in array array
* @cmp: Pointer to funct to compare values
* Return: integer or -1 if prog fails
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
{
return (-1);
}
if (!array || !cmp)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
