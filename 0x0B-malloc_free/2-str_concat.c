#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: s1 followed by s2.
 */
char *str_concat(char *s1, char *s2)
{
char *ar;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
ar = malloc(sizeof(char) * (i + j + 1));
if (ar == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
ar[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
ar[i] = s2[j];
i++, j++;
}
ar[i] = '\0';
return (ar);
}
