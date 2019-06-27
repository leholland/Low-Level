#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - prints natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
if (n == 99
{
printf("%d\n", n);
}
else if (n < 99)
{
while (n < 99)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
}
