#include "holberton.h"

/**
* _isalpha - checks if c is an alphabetic character, and if it's lower or upper
* @c: cheks if c is alpha 
* Return: 1 or 0
*/

int _isaplha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
