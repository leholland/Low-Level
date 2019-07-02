#include "holberton.h"

/**
* rev_string - Reverses string
* @*s: Var to reverse a string
*/

void rev_string(char *s)
{
    int s_len = 0;
    int i;

    while (s[s_len] != '\0')
    {
        s_len++;
    }

    for (i = s_len ; i >= 0 ; i--)
    {
       _putchar(s[i]);
    }
}
