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
char *ptr;
int i = 0;

if (str == NULL)
{
return (NULL);
}
while (str[i])
{
i++;
}
ptr = malloc(sizeof(char) * i + 1);
if (ptr == NULL)
{
return (NULL);
}
i = 0;
while (str[i])
{
ptr[i] = str[i];
i++;
}
ptr[i] = str[i];
return (ptr);
}
