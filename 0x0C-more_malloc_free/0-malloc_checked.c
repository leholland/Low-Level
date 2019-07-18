#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - Allocates memory using malloc
*@b: Variables to allocate memory for
* Return: b values, if it fails, it will return 98
*/

void *malloc_checked(unsigned int b)
{
/* using void for multiple vars being of different types*/
void *alloc;

alloc = malloc(b);

if (alloc == NULL)
{
exit(98);
}
return (alloc);
}
