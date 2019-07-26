#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Prints strings followed by new line
* @separator: String printed between strings
* @n: Number of strings passed to the function
* @...: Number of parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list a;

va_start(a, n);
for (i = 0; i < n; i++)
{
str = va_arg(a, char *);
(str) ? printf("%s", str) : printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(a);
}
