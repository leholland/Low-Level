#include "holberton.h"

/**
* _strlen - Helper function
*@s: Pointer to determine size of
*@len: Length of string
* Return: strlen, s, len
*/

int _strlen(char *s, int len)
{
if (*s == '\0')
{
return (len);
{
return (_strlen(++s, ++len));
}
/**
* _strlen_recursion - Returns length of string
*@s: Pointer to determine size of
* Return: _strlen, s, 0
*/

int _strlen_recursion(char *s)
{
return (_strlen(s, 0));
}
