#include "holberton.h"
#include <stdio.h>

/**
* to_upper - Checks for uppercase chars
*@c: paramater to check chars
* Return: c
*/
char to_upper(char c)
{
if (c >= 'a' && c <= 'z')
{
c = c - 32;
}

return (c);
}

/**
* cap_string - Capitalizes each word and checks for separators
*@s: Checks to see if chars are capital
* Return: s
*/

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || (s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' ||
s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}'))
{
s[i] = to_upper(s[i]);
}
}

return (s);
}
