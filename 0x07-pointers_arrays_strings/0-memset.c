#include "main.h"
#include <stdio.h>
/**
* _memset - fill bytes of the memory area pointed to a the constant byte
* @s: starting address of memory to be filled
* @b: the needed value
* @n: bytes to be changed
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
