#include "main.h"
/**
 *swap_int - swaps the values of the two integers.
 *@a: swaps the value of b and its address.
 *@b: swaps the value of a and its adress.
 *return : 0
*/
void swap_int(int *a, int *b)
/* funtion that swaps values of a and b using their memory locations */
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
