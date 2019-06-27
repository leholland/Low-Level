#include "holberton.h"
#include <stdio.h>

/**
* _isdigit - Checks to see if is digit 0-9
*
* @c: integer to check for digit
* Return: 0 or 1.
*/

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
