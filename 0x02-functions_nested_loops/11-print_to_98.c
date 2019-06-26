#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - displays all natural numbers starting from n to 98
 *
 */
void print_to_98(int n)
{
int i;
if (n < 99) 
{
for (i = n; i < 99; i++)
{
if (i > 9)
{
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
}
else
{
putchar(i + '0');
}
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
else
{
for (i = n; i > 97; i--)
{
if (i > 99)
{
putchar((i / 100) % 10 + '0');
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
}
else
{
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
}
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
