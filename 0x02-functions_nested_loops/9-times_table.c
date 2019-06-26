#include "holberton.h"

/**
 * times_table  - displays the 9 times table, starting with 0
 *
 * Return: results of the 9 times table
 */
void times_table(void)
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
_putchar(tens);
_putchar(ones);
}
else
{
_putchar(product + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
