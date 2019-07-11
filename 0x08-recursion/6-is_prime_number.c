#include "holberton.h"

/**
* _is_prime - Helper function
*@num: Integer to evaluate
*@div: Divisor
* Return: 1 or 0
*/

int _is_prime(int num, int div)
{
if (num < 2 || num % div == 0)
{
return (0);
}
else if (num == 2 || div * div > num)
{
return (1);
}
return (_is_prime(num, ++div));
}

/**
* is_prime_number - Returns 1 if n is a prime number,  0 otherwise
*@n: Integer to evaluate
* Return: 1 if input is a prime number, and 0 otherwise
*/

int is_prime_number(int n)
{
return (_is_prime(n, 2));
}

