#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Creates array of chars, inits w/ specific char
*@size: Size of string
*@c: String
* Return: NULL if size is 0
*/

char *create_array(unsigned int size, char c)
{

unsigned int i = 0;
char *ptr;

if (size == 0)
{
return (NULL);
}
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
