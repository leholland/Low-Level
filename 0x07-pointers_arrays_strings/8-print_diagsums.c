#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - sums of two diags of square matrix of integers
*@a:
*@size: Size o
*/

void print_diagsums(int *a, int size)
{
int sum_1 = 0;
int start_1 = 0;
int end_1 = size;

int sum_2 = 0;
int start_2 = size - 1;
int end_2 = size - 1;

while (size--)
{
sum_1 += a[start_1];
start_1 += (end_1 + 1);
sum_2 += a[start_2];
start_2 += end_2;
}

printf("%d, %d\n", sum_1, sum_2);
}
