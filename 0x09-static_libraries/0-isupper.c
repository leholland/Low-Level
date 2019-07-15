#include <stdio.h>
#include "holberton.h"

/**
* _isupper - checks for uppercase letter
*
* @c: integer to check for letter
* Return: 1 or 0
*/

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
