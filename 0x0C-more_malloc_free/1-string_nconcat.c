#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - Counts length of string
*@s: string to pass
* Return: 0
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}
/**
* string_nconcat - Concats two strings
*@s1: First string to add
*@s2: Second string to add
*@n: to use for concat
* Return: null or string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int i, j;
char *s3;
unsigned int size1;
unsigned int size2;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}
size1 = _strlen(s1);
size2 = n;

if (n >= size2)
s3 = malloc(sizeof(char) * (size1 + size2 + 1));
else
s3 = malloc(sizeof(char) * (size1 + n + 1));
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < n && s2 != '\0'; j++)
{
s3[i + j] = s2[j];
}

return (s3);
}
