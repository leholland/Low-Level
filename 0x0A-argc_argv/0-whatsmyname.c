#include <stdio.h>

/**
* main - Prints name followed by a new linet
*@argc: Argument counter
*@argv: Argument vector (array of strings)
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
