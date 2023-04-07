#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * Return: On success 1.
 * On error, 0 is returned.
 * @c : the character to check.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
