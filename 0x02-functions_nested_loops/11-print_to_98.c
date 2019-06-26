#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - displays all natural numbers starting from n to 98
 *
 */
void print_to_98(int n)
{
int i, k;
int product;
int ones, tens;

for (i = 0; i < 10; i++)
{
for (k = 0; k < 10; k++)
{
product = i * k;
if (product > 9)
{
ones = product % 10 + '0';
tens = (product / 10) % 10 + '0';
putchar(tens);
putchar(ones);
}
else
{
putchar(product + '0');
}
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
