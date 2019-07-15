#include "holberton.h"
/**
* _strcat - Concatenates two strings
*@dest: Destination of appended string
*@src: String appended to dest
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
