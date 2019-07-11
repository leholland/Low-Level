#include "holberton.h"

/**
* _sqrt - Helper function to find the natural square root of a number
*@num: number to find square root for
*@root: potential square root of num
* Return: The square root of a number
*/

int _sqrt(int num, int root)
{
if (root * root > num)
{
return (-1);
}
else if (root * root == num)
{
return (root);
}
else
{
return (_sqrt(num, ++root));
}
}

/**
* _sqrt_recursion - Returns the natural square root of a number
*@n: Variable containing number to find sq rt for
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (_sqrt(n, 1));
}
