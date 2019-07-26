#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its params
* @n: int to return
* @...: List of all arguments
* Return: sum of all ints
*/


int sum_them_all(const unsigned int n, ...)
{
va_list a;
unsigned int i, result;

if (n == 0)
return (0);

va_start(a, n);
for (i = result = 0; i < n; i++)
{
result += va_arg(a, int);
}
va_end(a);
return (result);
}
