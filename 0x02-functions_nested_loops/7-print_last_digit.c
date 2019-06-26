#include "holberton.h"
#include <stdio.h>
/**
* print_last_digit - calculates the last digit of integer
* @b: holds number
* Return: last digit of given number
*/
int print_last_digit(int b)
{
int c;
if (b < 0)
{
b = b * -1;
}
c = b % 10;
_putchar(c + '0');

return (c);
}
