#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - Counts string length
*@s: String to check
* Return: Length of string
*/

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
* argstostr - Concatenate all command line arguments
*@ac: Argument counter
*@av: Argument vector
* Return: Pointer to newly allocated space or NULL
*/

char *argstostr(int ac, char **av)
{
int i;
int j;
int position = 0, length = 0;
char *c;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
length += _strlen(av[i]);
}

c = malloc(sizeof(char) * (length + ac + 1));

if (c == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
c[position++] = av[i][j];
}
c[position++] = '\n';

}
c[position] = '\0';
return (c);

}

