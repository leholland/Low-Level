#include <stdio.h>
#include "holberton.h"

/**
* _isupper(int c) - checks for uppercase letter
*
* @c: integer to check for letter
* Return: 1 or 0
*/

int _isupper(int c)
{
int a;
for (a = 'A' ; a <= 'Z' ; a++)
{
if (c == a)
{
return (1);
}
}

return(0);
}
