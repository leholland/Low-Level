#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Calculates integers
* @argc: Contains 4
* @argv: Stores values
* Return: Result of calculated integers
*/

int main(int argc, char **argv)
{
int a;
int b;
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
exit(100);
}

if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

result = get_op_func(argv[2])(a, b);
printf("%d\n", result);
return (0);
}
