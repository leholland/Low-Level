#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers followed by a new line
* @separator: String printed between numbers
* @n: Number of integers passed to the function
* @...: Number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list a;

va_start(a, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(a, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(a);
}
