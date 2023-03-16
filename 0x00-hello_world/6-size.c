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
printf("Size of a char: %c byte(s)\n", sizeof(chartype));
printf("Size of an int: %d byte(s)\n", sizeof(integertype));
printf("Size of a long int: %ld byte(s)\n", sizeof(longinttype));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlonginttype));
printf("Size of a float: %ld byte(s)\n", sizeof(floattype));
return (0);
}
