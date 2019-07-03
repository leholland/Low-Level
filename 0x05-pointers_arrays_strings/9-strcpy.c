#include "holberton.h"

/**
* _strcpy - Copies string pointed by src including null byte
* @dest: Destination of copy
* @char: Var
* @src: Source of copy
*/

char *_strcpy(char *dest, char *src)
{
int counter, i;

counter = 0;

while (src[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
dest[i] = src[i];
dest[counter] = '\0';

return (dest);
}
