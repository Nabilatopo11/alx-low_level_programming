#include "main.h"
/**
* print_sign-checks for sign
* @n : is the int to return.
* Return: 1 if positive n ,0 if zero n or -& if negative n.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
_putchar(45);
return (-1);
}

