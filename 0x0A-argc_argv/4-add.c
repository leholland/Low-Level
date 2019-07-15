#include <stdio.h>
#include <stdlib.h>

/**
* main - Sums numbers
*@argc: Argument counter
*@argv: Argument vector
* Return: return sum of integer arguments
*/

int main(int argc, char **argv)
{
int i;
int k;
int sum = 0;

for (i = 1; i < argc; i++)
{
if (!(argv[i][0] >= '0' && argv[i][0] <= '9')
&& argv[i][0] != '-')
{
printf("Error\n");
return (1);
}
for (k = 1; argv[i][k] != 0; k++)
{
if (argv[i][k] < '0' || argv[i][k] > '9')
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);

return (0);
}
