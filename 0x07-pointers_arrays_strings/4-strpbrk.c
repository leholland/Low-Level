#include "holberton.h"

/**
* _strpbrk - Searches string for any set of bytes
*@s: String to span
*@accept: String to compare
* Return: Returns pointer to the bytes in s, or null
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
return (s + i);
}
return (0);
}
