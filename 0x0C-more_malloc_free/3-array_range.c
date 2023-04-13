#include <stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: input.
 * @max: input.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *ar;
int i, l;
if (min > max)
return (NULL);
l = max - min + 1;
ar = malloc(sizeof(int) * l);
if (ar == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
ar[i] = min;
}
return (ar);
}
