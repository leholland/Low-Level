#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Returns pointer to newly allocated space w copy of string
*@str: String to copy
* Return: Null or string
*/

char *_strdup(char *str)
{
unsigned int size = sizeof(str);
unsigned int i;
char *arr;

arr = malloc((size + 1) * sizeof(char));

if (arr == NULL || str == 0)
{
return (NULL);
}

i = 0;
while (i < size + 1)
{
arr[i] = str[i];
i++;
}
arr[i] = '\0';
return (arr);
}
