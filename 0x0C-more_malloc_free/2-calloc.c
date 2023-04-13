#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: input.
 * @size: input.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ar;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ar = malloc(size * nmemb);
if (ar == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
ar[i] = 0;
return (ar);
}
