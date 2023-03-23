#include "main.h"
/**
 * void more_numbers(void) - prints the numbers, from 0 to 14.
 */
void print_most_numbers(void)
{
int i;
char c;
for (i = 1; i <= 10 ; i++)
{
for (c = 48; c < 63 ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
