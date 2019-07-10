#include "holberton.h"

/**
* _strspn - Gets length of a prefix substring
*@s: String to span
*@accept: bytes of string
* Return: Size of string
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (k != 0 && (s[i] == ' ' || s[i] == ','))
return (k);
else if (s[i] == accept[j])
k++;
}
}
return (k);
}
