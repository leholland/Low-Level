#include "holberton.h"

/**
 * _islower - check and see if 'c' is lowercase or not
 * @c: checking if islower
 * Return: 1 or 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
