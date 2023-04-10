#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc : the counter
 * @argv:the string
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, add = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
add = add + atoi(argv[i]);
}
printf("%d\n", add);
}
else
{
printf("0\n");
}
return (0);
}
