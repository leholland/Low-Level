#include "holberton.h"
#include <stdlib.h>

/**
* _strlen - Counts length of string
*@s: String to check
* Return: String length
*/

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
* str_concat - Concatenates two strings
*@s1: First string
*@s2: Secpmd string
* Return: Pointer to newly allocated space in memory or NULL
*/
char *str_concat(char *s1, char *s2)
{

int i, size1, size2;
char *c;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

size1 = _strlen(s1);
size2 = _strlen(s2);

c = malloc(sizeof(char) * (size1 + size2 + 1));
if (c == NULL)
{
return (NULL);
}

for (i = 0; i < size1; i++)
{
c[i] = s1[i];
}
for (; i < size1 + size2; i++)
{
c[i] = s2[i - size1];
}
c[size1 + size2] = '\0';
return (c);
}
