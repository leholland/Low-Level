#include <stdio.h>

/**
* main - Displays numbers from 0 to 100 and "FizzBuzz",
"Fizz", or "Buzz" for multiples of 3,5, or both
*
* Return: 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 5 != 0 && i % 3 != 0)
printf("%d", i);
else if (i % 5 == 0 && i % 3 == 0)
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("Fizz");
if (i != 100)
putchar(' ');
}
putchar('\n');
return (0);
}
