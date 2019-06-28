#include "holberton.h"

/**
* print_diagonal - Displays a diagonal line on the terminal
*
* @n: Indicates how many times diagonal line should be printed
*/

void print_diagonal(int n)
{
int i, m;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0 ; i < n ; i++)
{
for (m = 0 ; m < i ; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

