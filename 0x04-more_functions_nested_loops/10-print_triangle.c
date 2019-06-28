#include "holberton.h"

/**
* print_triangle - Prints triangle followed by new line
*
* @size: indicator for the size of triangle
*/

void print_triangle(int size)
{
int t, m;
if (size > 0)
{
for (t = 0 ; t < size; t++)
{
for (m = size; m >= 0; m--)
{
if (m >= 0 && m <= t && m < size)
{
_putchar(35);
}
else if (m < size)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
