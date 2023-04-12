#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: char
 * @height: char
 * Return: If width or height is 0 or negative, return NULL.
*/
int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc(width * sizeof(int *));
if (ar == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
ar[i] = malloc(width * sizeof(int));
}
for (j = 0; j < height; j++)
{
ar[j] = malloc(height * sizeof(int));
}
for (j = 0; j < height; j++)
{
for (i = 0; i < width; i++)
ar[i][j] = 0;
}
return (ar);
}
