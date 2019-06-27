#include <stdio.h>

/**
* main - displays first 50 Fibonacci numbers
*
* Return: 0
*/
int main(void)
{
long a, b, c;
a = 1;
b = 2;
printf("%lu, ", a);
printf("%lu, ", b);
for (int i = 0 ; i < 49; i++)
{
c = a + b;
printf("%lu, ", c);
a = b;
b = c;
}
printf("%lu\n", a + b);

return (0);
}
