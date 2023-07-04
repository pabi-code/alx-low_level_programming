#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int sum, sum1, j;
sum = 0;
sum1 = 0;

for (j = 0; j < size; j++)
{
sum = sum + a[j * size + j];
}

for (j = size - 1; j >= 0; j--)
{
sum1 += a[j * size + (size - j - 1)];
}
printf("%d, %d\n", sum, sum1);
}
