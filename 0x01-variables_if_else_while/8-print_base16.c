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
char j;
j = 'a';
while (i < 10)
{
putchar(i + '0');
i++;
}
while (j <= 'f')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
