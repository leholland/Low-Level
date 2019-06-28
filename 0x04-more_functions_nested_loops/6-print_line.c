#include "holberton.h"

/**
* print_line - Draws a straight line through terminal
*
* @n: amount of times to print underscore
*/

void print_line(int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}

