#include "main.h"
/**
 * print_rev - prints a string.
 *@s : string.
 */
void print_rev(char *s)
{
int l = 0;
int o;
while (*s != '\0')
{
l++;
s++;
}
s--;
for (o = l; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

