#include "holberton.h"

/**
* _strcpy - Copies string pointed by src including null byte
* @dest: Destination of copy
* @char: Var
* @src: Source of copy
*/

char *_strcpy(char *dest, char *src)
{
{
int counter;
for (counter = 0; src[counter] !='\0'; counter++)
dest[counter] = src[counter];

return (dest);
}
}
