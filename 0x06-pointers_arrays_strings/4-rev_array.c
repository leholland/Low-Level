#include "holberton.h"

/**
* reverse_array - Reverses string
*@a: Pointer to hold string
*@n: Index of array
*/

void reverse_array(int *a, int n)
{
int tmp;
int i = 0;
int x = n - 1;

while (i < x)
{
tmp = a[i];
a[i] = a[x];
a[x] = tmp;
i++;
x--;

}

}
