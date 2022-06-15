#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: string
 * @src: string
 * @n: number
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
  
for (; n > i; i++)
{
dest[i] = '\0';
}
  
return (dest);
}
