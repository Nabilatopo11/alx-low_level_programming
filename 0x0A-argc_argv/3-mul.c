#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc : the counter
 * @argv:the string
 *
 * Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
int i, mul = 1;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul = mul *atoi(argv[i]);
}
printf("%d\n", mul);
}
return (0);
}

