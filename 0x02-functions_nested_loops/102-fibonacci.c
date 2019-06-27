#include <stdio.h>

/**
* main - displays first 50 Fibonacci numbers
*
* Return: 0
*/
int main(void)
{
long a, b, c;
a = 0;
b = 1;
int i;
for (i = 0 ; i < 49; i++)
{
c = a + b;
printf("%ld, ", c);
a = b;
b = c;
}
printf("%ld\n", a + b);

return (0);
}
