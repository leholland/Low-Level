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
printf("%ld, ", b);
for (int i = 0 ; i < 47; i++)
{
c = a + b;
printf("%ld, ", c);
a = b;
b = c;
}
printf("%ld\n", a + b);

return (0);
}
