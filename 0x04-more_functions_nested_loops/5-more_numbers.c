#include "holberton.h"

/**
* more_numbers - Displays 10 times the number from
* 0 to 14
*
*/

void more_numbers(void)
{
int i, k;

for (k = 0; k < 10; k++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
