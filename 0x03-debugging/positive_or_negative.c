#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * @i : the number to affich
 * positive_or_negative - prints positive,zero or negative i.
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
if (i == 0)
printf("%d is zero\n", i);
if (i < 0)
printf("%d is negative\n", i);
}
