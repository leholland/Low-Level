#include "holberton.h"

/**
* _strlen - Returns length of string
*@s: String to determine length of
* Return: Length of string s
*/
int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen(s + 1));
}
}

/**
* check_is_palindrome - Compares the chars in given string
*@s: String to check if palindrome
*@start: index for first char in string
*@end: index for last char in string
* Return: 1 if palindrome, 0 otherwise
*/
int check_is_palindrome(char *s, int start, int end)
{
if (s == '\0')
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else if (start < end + 1)
{
return (check_is_palindrome(s, ++start, --end));
}

return (1);
}
/**
* is_palindrome - Returns 1 if palindrome, 0 otherwise
*@s: Pointer to check string with
* Return: 1, or 0
*/

int is_palindrome(char *s)
{
int len = _strlen(s);
return (check_is_palindrome(s, 0, --len));
}
