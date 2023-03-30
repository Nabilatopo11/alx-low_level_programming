#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str : the string.
 * Return: str.
 */
char *string_toupper(char *str)
{
int i;
for (i = 0 ; i != '\0'; i++)
{
if(str[i] >= 97 && str[i] <= 122)
str[i]-=32;
}
return (str);
}


