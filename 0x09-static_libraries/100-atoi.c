#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - string to integer conversion
 * @s: string to convert
 * Return: converted integer
 */

int _atoi(char *s)
{
  int number = 0;
  int neg = 1;
  int i = 0;

  while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
  {
      if (s[i] == '-')
      {
	  neg *= -1;
      }
      i++;
  }
  while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
  {
      if (number >= 0)
      {
	  number = number * 10 - (s[i] - '0');
	  i++;
      }
      else
      {
	  number = number * 10 - (s[i] - '0');
	  i++;
      }
  }
  neg *= -1;
  return (number * neg);
}
