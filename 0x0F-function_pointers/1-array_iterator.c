#include "function_pointers.h"

/**
* array_iterator - Executes function given as param on each elem of array
* @array: Pointer to array
* @size: Size of array
* @action: Funct
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array && action)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
