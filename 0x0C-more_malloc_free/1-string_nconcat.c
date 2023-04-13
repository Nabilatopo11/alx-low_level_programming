#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: char.
 * @s2: char.
 * @n: unsigned int
 * Return: s1 followed by s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar;
unsigned int i, j, k;
i = 0;
j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (j > n)
j = n;
ar = malloc(sizeof(char) * (i + j + 1));
if (ar == NULL)
return (NULL);
for (k = 0; k < i; k++)
ar[k] = s1[k];
for (k = 0; k < j; k++)
ar[k + i] = s2[k];
ar[i + j] = '\0';
return (ar);
}
