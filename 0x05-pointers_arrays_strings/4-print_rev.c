#include "main.h"

/**
* print_rev - reverses the string
* @s: string
* return: 0
*/

void print_rev(char *s)
{
int strlen = 0;
int o;
while (*s != '\0')
{
strlen ++;
s++;
}
s--;
for (o = strlen; o > 0; o--)
{
_putchar(*s);
s--;

}
_putchar('\n');
}
