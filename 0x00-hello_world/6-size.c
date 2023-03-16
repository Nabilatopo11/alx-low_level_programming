#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char chartype;
int integertype;
long int longinttype;
long long int longlonginttype;
float floattype;
printf("Size of char: %ld byte\n", sizeof(chartype));
printf("Size of int: %ld bytes\n", sizeof(integertype));
printf("Size of long int: %ld bytes\n", sizeof(longinttype));
printf("Size of long long int: %ld bytes\n", sizeof(longlonginttype));
printf("Size of float: %ld bytes\n", sizeof(floattype));
return (0);
}
