#include <stdio.h>
/**
* main - print size of different data type
* Return: Always 0 (Success)
**/
int main(void)
{
int ia;
long int iia;
long long iiia;
float fa;
double da;
char ca;

printf("Size of a char: %ld byte(s)\n", sizeof(ca));
printf("Size of an int: %ld byte(s)\n", sizeof(ia));
printf("Size of a long int: %ld byte(s)\n", sizeof(iia));
printf("Size of long long int: %ld byte(s)\n", sizeof(iiia));
printf("Size of a float: %ld byte(s)\n", sizeof(fa));
return (0);
}
