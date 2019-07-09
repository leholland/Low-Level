#include "holberton.h"

/**
* rot13 - Encodes string using rot13
*@s: String to encode
* Return: s
*/

char *rot13(char *s)
{
int x, y;
char alpha[60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[60] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; alpha[y] != '\0'; y++)
{
if (s[x] == alpha[y])
{
s[x] = rot13[y];
break;
}
}
}

return (s);
}
