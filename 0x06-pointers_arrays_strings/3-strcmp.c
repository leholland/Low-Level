#include "holberton.h"

/**
* _strcmp - Comparing two strings
*@s1: String 1 to be compared
*@s2: String 2 to be comared
* Return: The difference between s1 and s2
*/

int _strcmp(char *s1, char *s2)
{

int i;

for (i = 0 ; s1[i] == s2[i] && s1[i] != '\0' ; i++)
;
return (s1[i] - s2[i]);

}
