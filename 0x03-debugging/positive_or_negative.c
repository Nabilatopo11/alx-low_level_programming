#include "main.h"
/**
 *positive_or_negative-is a function that prints positive or negative integer.
 *@i is the integer to check.
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
