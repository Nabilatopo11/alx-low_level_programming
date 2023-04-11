#include<stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars.
 *@size : size of array.
 *@c: character to return.
 * Return: pointer to array, NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *ar;
ar = malloc(size * sizeof(char));
if (size == 0 || ar == NULL)
return (NULL);
for (n = 0; n < size; n++)
ar[n] = c;
return (ar);
}
