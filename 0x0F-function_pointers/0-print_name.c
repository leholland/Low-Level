#include "function_pointers.h"

/**
* print_name - Function that prints name
* @name: Name to print
* @f: Function pointer
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
