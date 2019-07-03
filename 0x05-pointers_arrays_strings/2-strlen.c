#include "holberton.h"

/**
* strlen - Displays the length of a string
*
* @s: integer to determine length of string
* Return: Length of string
*/

int _strlen(char *s)
{

int a = 0;

while (s[a] != '\0')
{
a++;
}

return (a);
}
