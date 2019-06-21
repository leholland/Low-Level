#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = '0'; ch <= 'f'; ch++)
{
if (ch < ':' || ch > '`')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
