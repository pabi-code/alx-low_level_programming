#include "main.h"
#include <stdio.h>
/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @x: input value
* Return: dest
*/
char *_strncpy(char *dest, char *src, int x)
{
int j = 0;

while (j < x && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < x)
{
dest[j] = '\0';
j++;
}
return (dest);
}
