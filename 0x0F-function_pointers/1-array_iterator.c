#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @array: array.
 * @size :size.
 *action: pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
