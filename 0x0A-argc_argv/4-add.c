#include <stdio.h>
#include <stdlib.h>

/**
* _isdigit - Checks to see if is digit 0-9
*
* @c: integer to check for digit
* Return: 0 or 1.
*/

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}


/**
* main - Sums numbers
*@argc: Argument counter
*@argv: Argument vector
* Return: return sum of integer arguments
*/

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1 ; i < argc ; i++)
{
if (_isdigit(argv[i]) && atoi(argv[i]) != 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
