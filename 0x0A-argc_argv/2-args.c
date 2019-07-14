#include <stdio.h>

/**
* main - Prints all args
*@argc: Argument counter
*@argv: Argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
