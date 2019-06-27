#include "holberton.h"

/**
* times_table  - displays the 9 times table, starting with 0
*
* Return: results of the 9 times table
*/
void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 0)
{
_putchar(' ');
}
k = i * j;
if (k >= 10)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else
{
if (j != 0)
_putchar(' ');
_putchar(k + '0');
}
if (j != 9)
_putchar(',');

}
_putchar('\n');
}
}
