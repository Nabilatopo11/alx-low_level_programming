#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest : first string.
 * @src : second string.
 * @n: input value
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
