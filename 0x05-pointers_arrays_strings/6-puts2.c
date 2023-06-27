#include "main.h"

/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/

void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
