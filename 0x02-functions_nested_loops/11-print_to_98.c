#include "holberton.h"
#include <stdio.h>

/**
* print_to_98  - prints natural numbers from n to 98
*
*/
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);

if (n != 98)
{
putchar(',');
putchar(' ');
}

n--;
}
}
else if (n < 98)
{
while (n <= 98)
{
printf("%d", n);

if (n != 98)
{
putchar(',');
putchar(' ');
}

n++;
}
}
else
{
printf("%d", n);
}

putchar('\n');
}
