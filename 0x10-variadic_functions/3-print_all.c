#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints everything
* @format: list of types of arguments passed to function
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *s;
bool flag = false;
va_list args;
va_start(args, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(args, int));
flag = true;
break;
case 'i':
printf("%i", va_arg(args, int));
flag = true;
break;
case 'f':
printf("%f", (float) va_arg(args, double));
flag = true;
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
flag = true;
break;
}
printf("%s", s);
flag = true;
break;
}
if (format[i + 1] != 0 && flag)
printf(", ");
flag = false;
i++;
}
va_end(args);
printf("\n");
}
