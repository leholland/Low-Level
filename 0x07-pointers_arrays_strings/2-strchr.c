#include "holberton.h"

/**
* _strchr - Locates character in string
*@s: String being checked
*@c: Character to be searched for
* Return - s of i
*/

char *_strchr(char *s, char c)
{
  unsigned int i;

  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == c)
        break;

    return (s[i] == c ? (s + i) : '\0');
}
