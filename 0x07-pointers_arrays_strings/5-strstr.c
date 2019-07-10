#include "holberton.h"
#include <stdio.h>
/**
* _strstr - Locates a substring
*@haystack: pointer to return string
*@needle: pointing to string
* Return: pointer to the first sequence to occurance or null if not found
*/

char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (k = i, j = 0; needle[j] != '\0'; k++, j++)
{
if (needle[j] != haystack[k] || haystack[k] == '\0')
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
