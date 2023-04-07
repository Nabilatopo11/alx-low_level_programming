#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * Return: On success 1.
 * On error, 0 is returned.
 * @c : the digit to check.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
