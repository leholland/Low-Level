#include "holberton.h"

/**
* _strncat - Concatenates two strings
*@dest: Destination of new string
*@src: Appended string without null termination
*@n: Number of bytes to be used from src
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;

while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
