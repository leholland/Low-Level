#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i  = 0 ; i < 100 ; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(',');
putchar(' ');
}
{
putchar('\n');
}
return (0);
}
