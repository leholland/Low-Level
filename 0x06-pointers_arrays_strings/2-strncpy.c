#include "holberton.h"

/**
* _strncpy
*@dest: Destination of the copied string
*@src: Source of copied string
*@n: Bytes for src
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0 ; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
