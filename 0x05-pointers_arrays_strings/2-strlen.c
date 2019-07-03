#include "holberton.h"

/**
* strlen - Displays the length of a string
*
* @s: integer to determine length of string
* Return: Length of string
*/

int _strlen(char *s)
{
int i = 0;

for (i = 0 ; s[i] != '\0' ; ++i);

return (i);
}
