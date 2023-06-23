#include "main.h"
/**
 * main - generate num determines if a number is positive, negative or zero.
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return;
}
