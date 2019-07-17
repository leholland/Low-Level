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

unsigned int i;
char *arr;

arr = malloc((size + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
arr[i] = c;
i++;
}
arr[i] = '\0';
return (arr);
}
