#include "holberton.h"
#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
  char c;

  c = 'A';
  printf("%c: %d\n", c, _isupper(c));
  c = 'Z';
  printf("%c: %d\n", c, _isupper(c)); 
  c = 'j';
  printf("%c: %d\n", c, _isupper(c));
  return (0);
}
