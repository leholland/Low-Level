#include "holberton.h"

/**
* print_square - Displats a square
*
* @size: indicates size of square
*/

void print_square(int size)
{
int i, m;
if (size <= 0)
{
_putchar('\n');
return;
}
for (m = 0 ; m < size ; m++)
{
for (i = 0 ; i < size ; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
