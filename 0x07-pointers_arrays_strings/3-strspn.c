#include "main.h"
/**
 *_strspn -  a function that gets the length of a prefix substring.
 * @s: string.
 * @accept:second value
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
int j = 0, i = 0;
unsigned int a = 0;
while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
a++;
j++;
}
i++;
j = 0;
}
return (a);
}
