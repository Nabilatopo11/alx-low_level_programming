#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(48 + i);
}
putchar('\n');
return (0);
}
