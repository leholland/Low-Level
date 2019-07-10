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
int i, j;
int needlelen = 0;
int haystacklen = 0;
int found = 0;
for (needlelen = 0; needle[needlelen] != '\0'; needlelen++)
;
for (haystacklen = 0; haystack[haystacklen] != '\0';  haystacklen++)
;
if (needlelen == 0)
return (haystack);

for (i = 0; i < haystacklen -  needlelen + 1; i++)
{
for (j = 0; j < needlelen; j++)
{
if (haystack[i + j] == needle[j])
{
found = 1;
}
else
{
found = 0;
break;
}
}
if (found)
return (haystack + i);

return (haystack + i);
}
return (NULL);
}
