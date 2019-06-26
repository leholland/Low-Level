#include <stdio.h>
#include "holberton.h"

/**
 * _abs(int) - computes absolute value of a given integer
 *
 * Return: Absolute valie of given integer
 */
int _abs(int a)
{
if (a < 0)
{
return (a * -1);
}
return (a);
}
