#include "main.h"
/**
 *_memcpy -  a function that copies memory area.
 * @dest: area to copy in.
 * @src : area to copy from.
 * @n: the size.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
