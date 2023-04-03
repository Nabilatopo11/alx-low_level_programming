#include "main.h"
#include <stddef.h>
/**
 *_strchr -  a function that locates a character in a string.
 * @s: area to copy in.
 * @c: area to copy from.
 * Return: c or NULL.
 */
char *_strchr(char *s, char c)
{
if (*s == '\0')
return (s);
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
return ('\0');
}
