#include "holberton.h"
#include <stdio.h>
/**
* print_last_digit(int) - calculates the last digit of integer
*
* Return: last digit of given number 
*/
int print_last_digit(int b)
{
int c;

if (b < 0)
{
b = b * -1;
}
c = b%10; 
_putchar('0' + c);
return (c);
}
