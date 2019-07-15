#include <stdio.h>
#include <stdlib.h>

/**
* main - Mulitplies two numbers
*@argc: Argument counter
*@argv: Argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
int i;
int num = 0;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc ; i++)
{
num = atoi(argv[i]);

if (num)
{
sum += num;
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
