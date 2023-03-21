#include "main.h"
/**
* _islower-checkif the char is lower.
* @c : is the char to return.
* Return: 1 if c is lowercase otherwise 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
